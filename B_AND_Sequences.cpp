#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    ll mini=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mini=min(mini,a[i]);
    }
    int cnt=0;
    for(auto x: a){
        if(x==mini) cnt++;
        if((mini&x)!=mini){
            cout<<"0"<<endl;
            return;
        }
    }
    ll ans,fact=1;
    for(int i=1;i<=n-2;i++){
        fact=(fact*1LL*i)%mod;
    }
    ans=(cnt*1LL*(cnt-1))%mod;
    ans=(ans*1LL*fact)%mod;
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