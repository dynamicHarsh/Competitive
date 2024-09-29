#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n;
    cin>>n;
    vector<int> colors(n+1);
    for(int i=1;i<=n;i++) cin>>colors[i];
    vector<int> adj[n+1];
    int u,v;
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> vis(n+1,false);
    map<int,int> mp;
    vector<int> ans;
    function<void(int)> dfs=[&](int node){
        vis[node]=true;
        if(mp[colors[node]]==0) ans.push_back(node);
        mp[colors[node]]++;
        for(auto child: adj[node]){
            if(!vis[child]){
                dfs(child);
            }
        }
        mp[colors[node]]--;
        
    };

    dfs(1);
    sort(ans.begin(),ans.end());
    for(auto x: ans){
        cout<<x<<endl;
    }

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