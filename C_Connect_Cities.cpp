#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,m,u,v;
    cin>>n>>m;
    vector<int> adj[n+1];
    vector<bool> vis(n+1,false);
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    function<void(int)> dfs=[&](int node){
        vis[node]=true;
        for(auto nxt: adj[node]){
            if(!vis[nxt]) dfs(nxt);
        }
    };
    int ans=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            ans++;
        }
    }
    cout<<ans-1<<endl;
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