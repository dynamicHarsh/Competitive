#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,u,v;
    cin>>n;
    vector<int> adj[n+1];
    vector<bool> vis(n+1,false);
    for(int i=1;i<n;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        sort(adj[i].begin(),adj[i].end());
    }
    function<void(int)> dfs=[&](int vertex){
        cout<<vertex<<" ";
        vis[vertex]=true;
        for(auto child: adj[vertex]){
            if(!vis[child]){
                dfs(child);
                cout<<vertex<<" ";
            }
        }
    };
    dfs(1);
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