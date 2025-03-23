#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX_N = 1000005; // Slightly above 10^6

// Smallest Prime Factor array
vector<int> spf;

void sieve() {
    spf.resize(MAX_N);
    for (int i = 0; i < MAX_N; i++) spf[i] = i; // Initialize SPF
    spf[1] = 1; // Special case
    for (int i = 2; i * i < MAX_N; i++) {
        if (spf[i] == i) { // i is prime
            for (int j = i * i; j < MAX_N; j += i) {
                if (spf[j] == j) spf[j] = i; // Set SPF to i
            }
        }
    }
}

// Fenwick Tree for range sums and updates
class FenwickTree {
private:
    vector<ll> tree;
    int n;
public:
    FenwickTree(int _n) : n(_n), tree(_n + 1, 0) {}
    void update(int idx, ll val) {
        while (idx <= n) {
            tree[idx] += val;
            idx += idx & -idx;
        }
    }
    ll query(int idx) {
        ll sum = 0;
        while (idx > 0) {
            sum += tree[idx];
            idx -= idx & -idx;
        }
        return sum;
    }
    ll query(int left, int right) {
        return query(right) - query(left - 1);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Precompute SPF
    sieve();

    // Input
    int n,q;
    cin >> n >>q;
    vector<ll> a(n + 1); // 1-based indexing
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Initialize data structures
    FenwickTree ft(n);
    set<int> s; // Indices where a[i] > 1
    for (int i = 1; i <= n; i++) {
        ft.update(i, a[i]);
        if (a[i] > 1) s.insert(i);
    }

    // Process queries
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r;
            cin >> l >> r;
            auto it = s.lower_bound(l);
            while (it != s.end() && *it <= r) {
                int i = *it;
                ll old_val = a[i];
                if (old_val > 1) {
                    int d = spf[old_val];
                    ll new_val = old_val / d;
                    ft.update(i, new_val - old_val);
                    a[i] = new_val;
                    if (new_val == 1) {
                        auto to_erase = it;
                        ++it;
                        s.erase(to_erase);
                    } else {
                        ++it;
                    }
                } else {
                    ++it;
                }
            }
        } else if (type == 2) {
            int l, r;
            cin >> l >> r;
            cout << ft.query(l, r) << '\n';
        } else if (type == 3) {
            int i, k;
            cin >> i >> k;
            ll old = a[i];
            a[i] = k;
            ft.update(i, k - old);
            if (k > 1) s.insert(i);
            else s.erase(i);
        }
    }

    return 0;
}