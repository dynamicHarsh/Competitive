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


    vector<int> p(n+1,-1);
    vector<bool> vis(n+1,false);

    function<void(int,int)> dfs=[&](int node,int parent){
        p[node]=parent;
        vis[node]=true;
        for(auto nxt: adj[node]){
            if(nxt==parent) continue;

            if(!vis[nxt]){
                dfs(nxt,node);
            }
            else{
                int cur=node;
                vector<int> ans;
                while(cur^nxt){
                    ans.push_back(cur);
                    cur=p[cur];
                }
                ans.push_back(nxt);
                ans.push_back(node);
                cout<<ans.size()<<endl;
                for(auto x: ans){cout<<x<<" ";}cout<<endl;
                exit(0);
            }
        }
    };


    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i,-1);
        }
    }

    cout<<"IMPOSSIBLE"<<endl;



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