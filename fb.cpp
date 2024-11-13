#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10000000;  // Maximum value for N
vector<int> primes;          // List of primes
unordered_set<int> prime_set; // Set for fast prime lookup
vector<int> subtractorizations(MAXN + 1, 0); // Number of N-subtractorizations

// Sieve of Eratosthenes to generate primes
void sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            prime_set.insert(i);
            for (int j = 2 * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

// Precompute the number of N-subtractorizations for all N <= MAXN
void precompute() {
    sieve(MAXN);
    
    // Use a single loop with two-pointer technique
    for (size_t i = 0; i < primes.size(); i++) {
        int p = primes[i];
        
        for (size_t j = 0; j < i; j++) { // Only consider primes less than p
            int r = primes[j];
            int diff = p - r; // Calculate the difference
            
            if (diff < 0) break; // No need to continue if diff is negative
            if (prime_set.count(diff)) { // Check if the difference is prime
                subtractorizations[diff]++; // Increment the count for the difference
            }
        }
    }

    // Compute cumulative counts
    for (int i = 1; i <= MAXN; i++) {
        subtractorizations[i] += subtractorizations[i - 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // Precompute all the subtractorizations for all N <= MAXN
    precompute();

    // Input handling
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << subtractorizations[n] << "\n";
    }

    return 0;
}
