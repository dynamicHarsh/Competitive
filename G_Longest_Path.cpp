#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
vector<int> adj[100005];
vector<int> dp(100005,-1);
int f(int v){

    if(dp[v]!=-1) return dp[v];
    int maxLen=0;
    for(auto x: adj[v]){
        maxLen=max(maxLen,f(x)+1);
    }
    return dp[v]=maxLen;
}

void solve(){
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    
    int ans=0;
    for(int i=1;i<=n;i++){
        if(dp[i]==-1)
        ans=max(ans,f(i));
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