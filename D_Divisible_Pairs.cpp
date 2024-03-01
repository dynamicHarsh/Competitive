#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    map<pair<ll,ll>, ll> m;
    for(ll i=0;i<n;i++){
        m[{a[i]%x,a[i]%y}]++;
        // cout<<"{"<<a[i]%x<<","<<a[i]%y<<"}"<<"="<<m[{a[i]%x,a[i]%y}]<<endl;
        
    }
    
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll reqx=(x-(a[i]%x))%x;
        ll reqy=a[i]%y;
        ll tmp=m[{reqx,reqy}];
        if(a[i]%x==reqx) tmp--;
        
        ans+=tmp;

    }
    cout<<ans/2<<endl;
    // cout<<endl;
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