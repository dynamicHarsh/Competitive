#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

int f(string a, string b, string c)
{
    int m = a.size(), n = b.size(), p = c.size();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, INT_MAX));

    dp[0][0] = 0;

    for (int i = 0; i <= m; ++i)
    {
        for (int j = 0; j <= n; ++j)
        {
            if (i + j > p)
                break;
            if (i > 0)
            {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + (a[i - 1] != c[i + j - 1]));
            }
            if (j > 0)
            {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + (b[j - 1] != c[i + j - 1]));
            }
        }
    }

    return dp[m][n];
}

void solve()
{
    string a, b, c;
    cin >> a >> b >> c;
    cout << f(a, b, c) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}