#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
int n,m;
vector<int> adj[100005];
bool vis[100005];

void dfs(int i){
    vis[i]=1;
    for(auto x: adj[i]){
        if(!vis[x]){
            dfs(x);
        }
    }
}

void solve(){
    cin>>n>>m;
    for(int i=0,a,b;i<m;i++){
        cin>>a>>b;a--,b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            ans.push_back(i);
            dfs(i);
        }
    }
    cout<<ans.size()-1<<endl;
    for(int i=1;i<ans.size();i++){
        cout<<ans[0]+1<<" "<<ans[i]+1<<"\n";
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