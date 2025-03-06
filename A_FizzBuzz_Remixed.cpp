#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    ll n;
    cin>>n;
    ll ans=0;
    if(n<=2) cout<<n+1<<endl;
    else{
        ans=3*(n/15);
        n=n%15;
        if(n==0) ans+=1;
        else if(n==1) ans+=2;
        else ans+=3;
        cout<<ans<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}