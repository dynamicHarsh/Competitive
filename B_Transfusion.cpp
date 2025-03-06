#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % n != 0)
    {
        cout << "NO" << endl;
        return;
    }
    ll req = sum / n;
    int odd = (n + 1) / 2;
    int even = n / 2;
    ll sumo = 0, sume = 0;
    for (int i = 0; i < n; ++i)
    {
        if ((i + 1) % 2 == 1)
        {
            sumo += a[i];
        }
        else
        {
            sume += a[i];
        }
    }
    if (sumo == req * odd && sume == req * even)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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