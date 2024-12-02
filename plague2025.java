#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <sstream>

class ShannonCircuits {
private:
    static int getValue(const std::string& var, 
                        std::unordered_map<std::string, std::vector<int>>& outputs, 
                        std::unordered_map<std::string, std::vector<int>>& values, 
                        int cycle) {
        if (values.find(var) != values.end()) {
            return values[var][cycle];
        } else {
            return outputs[var][cycle];
        }
    }

    static int computeGate(const std::string& operation, int value1, int value2) {
        if (operation == "AND") {
            return value1 & value2;
        } else if (operation == "OR") {
            return value1 | value2;
        } else if (operation == "NAND") {
            return ~(value1 & value2) & 1;
        } else if (operation == "NOR") {
            return ~(value1 | value2) & 1;
        } else if (operation == "XOR") {
            return value1 ^ value2;
        }
        return 0;
    }

    static void simulateCircuit(std::unordered_map<std::string, std::vector<std::string>>& gates, 
                                std::unordered_map<std::string, std::vector<int>>& values, 
                                const std::string& targetGate, 
                                int t) {
        std::unordered_map<std::string, std::vector<int>> outputs;
        
        // Initialize outputs for each gate
        for (const auto& gate : gates) {
            outputs[gate.first] = std::vector<int>(t, 0);
        }
        
        // Simulate circuit for each time cycle
        for (int cycle = 1; cycle < t; cycle++) {
            for (const auto& gate : gates) {
                const std::vector<std::string>& definition = gate.second;
                const std::string& operation = definition[0];
                const std::string& input1 = definition[1];
                const std::string& input2 = definition[2];
                
                int value1 = getValue(input1, outputs, values, cycle - 1);
                int value2 = getValue(input2, outputs, values, cycle - 1);
                
                int result = computeGate(operation, value1, value2);
                outputs[gate.first][cycle] = result;
            }
        }
        
        // Print output for target gate
        const std::vector<int>& targetOutput = outputs[targetGate];
        for (int i = 0; i < t; i++) {
            std::cout << targetOutput[i] << (i == t - 1 ? "\n" : " ");
        }
    }

public:
    static void run() {
        std::unordered_map<std::string, std::vector<std::string>> gates;
        std::unordered_map<std::string, std::vector<int>> values;
        
        int n;
        std::cin >> n;
        std::cin.ignore(); // Clear newline
        
        // Read gate definitions
        for (int i = 0; i < n; i++) {
            std::string line;
            std::getline(std::cin, line);
            
            size_t equalPos = line.find('=');
            std::string gateName = line.substr(0, equalPos);
            std::string gateDefinition = line.substr(equalPos + 1);
            
            // Remove parentheses and split
            std::replace(gateDefinition.begin(), gateDefinition.end(), '(', ' ');
            std::replace(gateDefinition.begin(), gateDefinition.end(), ')', ' ');
            std::replace(gateDefinition.begin(), gateDefinition.end(), ',', ' ');
            
            std::istringstream iss(gateDefinition);
            std::vector<std::string> parts;
            std::string part;
            while (iss >> part) {
                parts.push_back(part);
            }
            
            gates[gateName] = parts;
        }
        
        // Read time cycles
        int t;
        std::cin >> t;
        std::cin.ignore(); // Clear newline
        
        // Read input values
        while (true) {
            std::string line;
            std::getline(std::cin, line);
            
            // Check if line contains only letters (target gate)
            if (std::all_of(line.begin(), line.end(), ::isalpha)) {
                simulateCircuit(gates, values, line, t);
                break;
            }
            
            // Parse input values
            std::istringstream iss(line);
            std::string inputVar;
            iss >> inputVar;
            
            std::vector<int> timings;
            int val;
            while (iss >> val) {
                timings.push_back(val);
            }
            
            values[inputVar] = timings;
        }
    }
};

int main() {
    ShannonCircuits::run();
    return 0;
}