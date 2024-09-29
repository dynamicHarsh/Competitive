#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

const int MAXN=400010;
vector<int> adj[MAXN];
vector<int> dp(MAXN);


void dfs(int parent,int depth){
    dp[parent]=depth;
    for(auto child: adj[parent]){
            dfs(child,depth+1);
    }
}


void solve(){
    int n;
    cin>>n;
    int e;
    for(int i=1;i<=n;i++){
        cin>>e;
        adj[e].push_back(2*i);
        adj[e].push_back(2*i+1);
    }
    
    dfs(1,0);
    for(int i=1;i<=2*n+1;i++){
        cout<<dp[i]<<endl;
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