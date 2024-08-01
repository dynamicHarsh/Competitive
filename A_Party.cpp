#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

int ans=0;
vector<int> adj[2005];
void dfs(int node,int depth){
    ans=max(depth,ans);

    for(auto x: adj[node]){
        dfs(x,depth+1);
    }
}

void solve(){
    int n;
    cin>>n;
    int e;
    
    for(int i=1;i<=n;i++){
        cin>>e;
        if(e!=-1) adj[i].push_back(e);
    }
    for(int i=1;i<=n;i++){
        dfs(i,1);
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