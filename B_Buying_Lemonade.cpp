#include <bits/stdc++.h>
using namespace std;

typedef long long ll;  // Use long long for large values

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    ll n, k;  
    cin >> n >> k;
    vector<ll> a(n + 1, 0);  
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    
    ll ans = 0, cur = 0, p = 1;
    
    while (cur < k) {
        if (p <= n && cur + (n - p + 1) * (a[p] - a[p - 1]) < k) {
            cur += (n - p + 1) * (a[p] - a[p - 1]);
            ans += (n - p + 1) * (a[p] - a[p - 1]) + 1;
            p++;
        } else {
            ans += k - cur;
            cur = k;
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
