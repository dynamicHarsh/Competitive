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
    ll ans=1;
    function<void(int)> dfs=[&](int node){
        vis[node]=true;
        if(ans>1000000){
            cout<<1000000<<endl;
            exit(0);
        }
        for(auto nxt: adj[node]){
            if(!vis[nxt]){
                ans++;
                dfs(nxt);
            }
        }
        vis[node]=false;
    };
    dfs(1);
    ans=min(1000000*1LL,ans);
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