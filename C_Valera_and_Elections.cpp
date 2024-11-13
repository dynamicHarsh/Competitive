#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,u,v,t;
    cin>>n;
    vector<bool> white(n+1,false);
    vector<int> adj[n+1];
    vector<ll> subtree(n+1,0);
    function<int(int,int)> dfs=[&](int u,int p)->ll{
        if(white[u]) subtree[u]++;

        for(auto child: adj[u]){
            if(child==p) continue;
            subtree[u]+=dfs(child,u);
        }
        return subtree[u];
    };


    for(int i=1;i<n;i++){
        cin>>u>>v>>t;
        if(t==2){white[u]=true;white[v]=true;}
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,-1);
    vector<ll> ans;
    for(int i=1;i<=n;i++){
        if(subtree[i]==1) ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    for(auto x: ans){
        cout<<x<<" ";
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