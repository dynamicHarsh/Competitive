#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n,h;
    cin>>n>>h;
    ll a[n],b[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    vector<ll> c(n,0);
    unordered_map<ll,ll> m;
    for(int i=0;i<n;i++){
        c[i]=b[i]^(i+1);
        m[c[i]]++;
    }
    ull ans=0;
    for(ll i=0;i<n;i++){
        ll cnt=0;
        ll comp=h^a[i]^(i+1);
        cnt=m[comp];
        ans+=cnt;
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