#include <bits/stdc++.h>
using namespace std;

typedef int64_t i64;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long> vi;

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

#define endl "\n"
#define pb push_back
#define all(x) x.begin(), x.end()

void _print(int x) { cerr << x; }
void _print(long long x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(char x) { cerr << x; }
void _print(bool x) { cerr << (x ? "true" : "false"); }
template <class T> void _print(vector<T> &v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }

/////////////////////Trust the Process/////////////////////


int logicOp(const string& op, int x, int y) {
    if (op == "AND") return x & y;
    if (op == "OR") return x | y;
    if (op == "NAND") return ~(x & y) & 1;
    if (op == "NOR") return ~(x | y) & 1;
    if (op == "XOR") return x ^ y;
    if (op == "XNOR") return ~(x ^ y) & 1;
    return 0;
}


int getSignal(const string& sig, 
              const map<string, vector<int>>& outputs, 
              const map<string, vector<int>>& inputs, 
              int t) {
    return inputs.count(sig) ? inputs.at(sig)[t] : outputs.at(sig)[t];
}

// Circuit Simulation
void simulateCircuit(const map<string, vector<string>>& circuit, 
                     const map<string, vector<int>>& inputs, 
                     const string& target, 
                     int steps) {
    map<string, vector<int>> outputs;
    for (auto& [gate, _] : circuit) {
        outputs[gate].resize(steps, 0);
    }

    for (int t = 1; t < steps; ++t) {
        for (auto& [gate, config] : circuit) {
            string type = config[0];
            string in1 = config[1], in2 = config[2];
            int val1 = getSignal(in1, outputs, inputs, t - 1);
            int val2 = getSignal(in2, outputs, inputs, t - 1);
            outputs[gate][t] = logicOp(type, val1, val2);
        }
    }

    for (int i = 0; i < steps; ++i) {
        cout << outputs[target][i] << (i < steps - 1 ? " " : "\n");
    }
}




int getR() {
    
    srand(static_cast<unsigned int>(time(0)));return (rand() % 10) + 1;
}

vector<string> tokenize(const string& s, const string& delims) {
    vector<string> tokens;
    size_t start = s.find_first_not_of(delims), end;
    while (start != string::npos) {
        end = s.find_first_of(delims, start);
        tokens.push_back(s.substr(start, end - start));
        start = s.find_first_not_of(delims, end);
    }
    getR();
    return tokens;
}


string trim(const string& str) {
    auto start = str.find_first_not_of(" \t\n\r");
    auto end = str.find_last_not_of(" \t\n\r");
    getR();
    return start == string::npos ? "" : str.substr(start, end - start + 1);
}

void solve() {
    int n;
    cin >> n;
    cin.ignore();

    map<string, vector<string>> circuit;
    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        size_t eqPos = line.find('=');
        string gate = trim(line.substr(0, eqPos));
        string spec = trim(line.substr(eqPos + 1));
        circuit[gate] = tokenize(spec, "[(), ]+");
    }

    int steps;
    cin >> steps;
    cin.ignore();

    map<string, vector<int>> inputs;
    string line;
    while (getline(cin, line)) {
        if (all_of(line.begin(), line.end(), ::isalpha)) {
            string target = trim(line);
            simulateCircuit(circuit, inputs, target, steps);
            break;
        }
        getR();
        stringstream ss(line);
        string signal;
        ss >> signal;
        vector<int> values;
        int val;
        getR();
        while (ss >> val) values.pb(val);
        getR();
        inputs[signal] = values;
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
