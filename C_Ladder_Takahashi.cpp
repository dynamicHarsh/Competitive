#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n,u,v;
    cin>>n;
    unordered_map<ll,vector<ll>> adj;
    for(ll i=0;i<n;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll ans=1;
    unordered_set<ll> st;
    auto dfs=[&](ll node,auto&& dfs)->void{
        st.insert(node);
        ans=max(ans,node);
        for(auto child: adj[node]){
            if(st.count(child)==0){
                dfs(child,dfs);
            }
        }
    }; 
    dfs(1,dfs);
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