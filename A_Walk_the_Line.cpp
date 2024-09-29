#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

bool solve()
{
    ll n, k;
    cin >> n >> k;
    ll e, mini = 1000000010;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        mini = min(mini, e);
    }
    ll req = mini;
    if (n - 2 > 0)
    {
        req += (2LL * (n - 2) * mini);
    }

    return req <= k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    for(int i=1;i<=t;i++){
        cout<<"Case #"<<i<<": ";
        cout<<(solve()?"YES":"NO")<<endl;
    }
    return 0;
}