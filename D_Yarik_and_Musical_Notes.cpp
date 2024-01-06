#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll& x : a){cin>>x;}
    map<ll,ll> f;
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans+=f[a[i]];
        if(a[i]==1) ans+=f[2];
        else if(a[i]==2) ans+=f[1];
        f[a[i]]++;
    }
    cout<<ans<<endl;
}
 
int main(){
    ios::sync_with_stdio(false);
      cin.tie(0);
 
    int t=1;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}