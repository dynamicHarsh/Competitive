#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll damage,n;
    cin>>damage>>n;
    ll a[n];
    ll c[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>c[i];
    set<pair<ll,ll>> st;
    for(int i=0;i<n;i++){
      st.insert({1,i});
    }
    ll ans=0;
    while(damage>0){
        auto [turn,i]=*st.begin();
        st.erase(st.begin());
        ans=turn;
        damage-=a[i];
        st.insert({turn+c[i],i});
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