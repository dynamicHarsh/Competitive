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
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> vis(n+1,false);
    vector<int> disc(n+1),low(n+1);
    int timer=0,ans=0;

    function<void(int,int)> dfs=[&](int node,int parent){
        vis[node]=true;
        disc[node]=low[node]=++timer;

        for(auto child: adj[node]){
            if(child==parent) continue;
            if(!vis[child]){
                dfs(child,node);
                low[node]=min(low[node],low[child]);

                if(disc[node]<low[child]){
                    ans++;
                }
            }
            else{
                low[node]=min(low[node],low[child]);
            }
        }
    };

    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i,-1);
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