#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,m;
    cin>>n>>m;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    
    vector<ll> pref(n);
    for(int i=0;i<n;i++){
        if(i-m>=0){
            pref[i]=a[i]+pref[i-m];
        }
        else{
            pref[i]=a[i];
        }
    }
    ll ans=0;
    
    for(int i=0;i<n;i++){
        if(i-m>=0){
            ans+=a[i]+pref[i-m];
        }
        else{
            ans+=a[i];
        }
        cout<<ans<<" ";
    }
    cout<<endl;
}
 
int main(){
    ios::sync_with_stdio(false);
      cin.tie(0);
 
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
    return 0;
}