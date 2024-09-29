#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    if(k>=3){
        cout<<"0"<<endl;
        return;
    }
    sort(a.begin(),a.end());
    ll ans=a[0];
    for(int i=1;i<n;i++){
            ans=min(ans,a[i]-a[i-1]);
        }
    if(k==1){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            ll v=a[i]-a[j];
            int ind=lower_bound(a.begin(),a.end(),v)-a.begin();
            if(ind<n) ans=min(ans,a[ind]-v);
            if(ind>0) ans=min(ans,v-a[ind-1]);
        }
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