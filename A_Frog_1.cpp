#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

int f(int ind, vector<int> &h, vector<int> &dp)
{
    if (ind == 0)
    {
        return 0;
    }
    if (dp[ind] != -1)
        return dp[ind];
    int left = f(ind - 1, h, dp) + abs(h[ind] - h[ind - 1]);
    int right = INT_MAX;
    if (ind > 1)
    {
        right = f(ind - 2, h, dp) + abs(h[ind] - h[ind - 2]);
    }
    return dp[ind] = min(left, right);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    vector<int> dp(n, 0);
    // f(n - 1, h, dp);
    // cout << dp[n-1]<<endl;
    
    for(int ind=1;ind<n;ind++){
        int left=dp[ind-1]+abs(h[ind]-h[ind-1]);
        int right=1e9;
        if(ind>1){
            right=dp[ind-2]+abs(h[ind]-h[ind-2]);
        }
        dp[ind]=min(left,right);
    }
    cout<<dp[n-1]<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}