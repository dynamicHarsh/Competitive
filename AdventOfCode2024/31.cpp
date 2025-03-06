#include <iostream>
#include <vector>
#include <string>
#include <regex>
#include <stdexcept>

bool isValidMul(int x, int y) {
    return (x >= 1 && x <= 999) && (y >= 1 && y <= 999);
}

long long extractNumberFromMul(const std::string& input) {
    std::regex mul_regex(R"(mul\((\d+),(\d+)\))");
    std::smatch matches;
    
    if (std::regex_search(input, matches, mul_regex) && matches.size() == 3) {
        long long x = std::stoi(matches[1].str());
        long long y = std::stoi(matches[2].str());
        return x * y;
    }
    
    throw std::runtime_error("Invalid mul() format");
}

long long computeTotalMulSum(const std::string& input) {
    long long total_sum = 0;
    std::string working_input = input;
    
    // Remove non-mul expressions
    std::regex mul_only_regex(R"(mul\(\d+,\d+\))");
    std::sregex_iterator it(working_input.begin(), working_input.end(), mul_only_regex);
    std::sregex_iterator end;
    
    while (it != end) {
        try {
            long long mul_result = extractNumberFromMul(it->str());
            total_sum += mul_result;
        } catch (const std::exception&) {
            // Skip invalid mul expressions
        }
        ++it;
    }
    
    return total_sum;
}

int main() {
    std::string input;
    std::cin>>input;
    
    int result = computeTotalMulSum(input);
    std::cout << "Total sum of valid mul() values: " << result << std::endl;
    
    return 0;
}