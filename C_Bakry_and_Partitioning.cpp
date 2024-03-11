#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

bool vis[100005];
    vector<int> adj[100005];
    vector<int> val(100005);
    int x=0,cnt=0;
int dfs(int u){
    int tmp=val[u];
    vis[u]=true;
    for(auto v:  adj[u]){
        if(!vis[v]){
            tmp^=dfs(v);
        }
    }
    if(tmp==x){
        cnt++;
        tmp=0;
    }
    return tmp;
}
void solve(){
    int n,k,u,v;
    cin>>n>>k;
    
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        u--;
        v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    
    for(int i=0;i<n;i++){
        x^=val[i];
    }
    bool possible=false;
    if(x==0){
        possible=true;
    }
    else{
        // cout<<"x="<<x<<endl;
        dfs(0);
        if(cnt>=2 && k!=2){
            possible=true;
        }
    }
    // cout<<"cnt "<<cnt<<endl;
    if(possible){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
     x=0;
        cnt=0;
    for(int i=0;i<n;i++){
        vis[i]=false;
       
        adj[i].clear();
    }


}
 
int main(){
    ios::sync_with_stdio(false);
      cin.tie(0);
 
    int t=1;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}