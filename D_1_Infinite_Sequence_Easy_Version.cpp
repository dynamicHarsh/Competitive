#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"

ll n;
vector<int> arr, prefix;
unordered_map<ll, int> memo;

int compute(ll x) {
    if (x <= n) return prefix[x];
    if (memo.count(x)) return memo[x];
    int res = prefix[n];
    if (x % 2 == 0) {
        res ^= compute(x / 2);
        if (n % 2 == 0) {
            res ^= prefix[n / 2];
        }
    }
    memo[x] = res;
    return res;
}

void solve() {
    ll l, r;
    cin >> n >> l >> r;
    arr.resize(n + 1);
    prefix.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    prefix[1] = arr[1];
    for (int i = 2; i <= n; i++) {
        prefix[i] = prefix[i - 1] ^ arr[i];
    }
    memo.clear();
    cout << (l <= n ? arr[l] : compute(l / 2)) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
