#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to compute GCD
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Function to find all divisors of a number
vector<int> findDivisors(int x) {
    vector<int> divisors;
    for (int i = 1; i * i <= x; ++i) {
        if (x % i == 0) {
            divisors.push_back(i);
            if (i != x / i) divisors.push_back(x / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    // Precompute prefix GCD of differences
    vector<int> prefixGCD(n, 0);
    for (int i = 1; i < n; ++i) {
        prefixGCD[i] = gcd(prefixGCD[i - 1], abs(a[i] - a[i - 1]));
    }

    // Answer queries
    while (q--) {
        int l, r;
        cin >> l >> r;
        --l; --r; // Convert to 0-based indexing
        if (l == r) {
            cout << 0 << endl; // Single element, m can be infinite
            continue;
        }

        // Compute GCD of differences in the range [l, r]
        int rangeGCD = gcd(prefixGCD[r], l > 0 ? prefixGCD[l] : 0);

        // Find all divisors of the range GCD
        vector<int> divisors = findDivisors(rangeGCD);

        // The largest divisor is the answer
        cout << divisors.back() << endl;
    }

    }
    
    return 0;
}
