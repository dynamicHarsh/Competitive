#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll f(int ind, bool bound, int cnt, const string &s, vector<vector<vector<ll>>> &dp) {
    if (cnt > 3) return 0; 
    if (ind == s.length()) return 1;
    if (dp[ind][bound][cnt] != -1) return dp[ind][bound][cnt];

    int limit = bound ? s[ind] - '0' : 9;
    ll ans = 0;
    for (int digit = 0; digit <= limit; ++digit) {
        ans += f(ind + 1, bound && (digit == limit), cnt + (digit > 0), s, dp);
    }

    return dp[ind][bound][cnt] = ans;
}

ll countClassyNumbers(ll num) {
    if (num < 0) return 0;
    string s = to_string(num);
    vector<vector<vector<ll>>> dp(s.length(), vector<vector<ll>>(2, vector<ll>(4, -1)));
    return f(0, 1, 0, s, dp);
}

void solve() {
    ll l, r;
    cin >> l >> r;
    ll cntR = countClassyNumbers(r);
    ll cntL = countClassyNumbers(l - 1);
    cout << cntR - cntL << endl;
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
