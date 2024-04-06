#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
vector<int> adj[100005];
bool vis[100005];
int p[100005]; 
void dfs(int u,int pu=-1){
    p[u]=pu;
    vis[u]=true;
    
    for(auto v: adj[u]){
        if(v==pu){
            continue;
        }
        if(vis[v]){
            int u2=u;
            vector<int> ans;
            while(u^v){
                ans.push_back(u);
                u=p[u];
            }
            ans.push_back(v);
            ans.push_back(u2);
            cout<<ans.size()<<endl;
            for(auto a: ans){
                cout<<a+1<<" ";
            }
            cout<<endl;
            exit(0);
        }
        else{
            dfs(v,u);
        }
        
    }

}

void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=0,a,b;i<m;i++){
        cin>>a>>b;
        a--,b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(p,-1,4*n);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i);
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