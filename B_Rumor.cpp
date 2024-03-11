#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
vector<ll> edges[100005];
bool vis[100005];
ll c[100005];
ll dfs(ll v){
    ll mn=c[v];
    vis[v]=true;
    for(auto x: edges[v]){
        if(!vis[x]){
            mn=min(mn,dfs(x));
        }
    }
    return mn;
}


void solve(){
    ll n,m;
    cin>>n>>m;
    
    for(ll i=0;i<n;i++){
        cin>>c[i];
    }
    ll u,v;
    for(ll i=0;i<m;i++){
        cin>>u>>v;
        --u;--v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    ull ans=0;
    for(ll i=0;i<n;i++){
        if(!vis[i]){
            ans+=dfs(i);
        }
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