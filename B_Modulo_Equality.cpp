#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n,m;
    cin>>n>>m;

    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<n;j++) cin>>b[j];
    sort(b.begin(),b.end());
    auto check=[&](ll x)->bool{
        vector<ll> temp(n);
        for(int i=0;i<n;i++){
            temp[i]=(a[i]+x)%m;
        }
        sort(temp.begin(),temp.end());
        
        return temp==b;
    };

    set<ll> st;
    for(int i=0;i<n;i++){
        if(a[0]<=b[i]){
            st.insert(b[i]-a[0]);
        }
        else{
            st.insert((m-a[0])+b[i]);
        }
    }
    ll ans=m;
    for(auto x: st){
        if(check(x)) ans=min(x,ans);
    }
    cout<<ans<<endl;

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