#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void dfs(int v,int p){


}


void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> adj[n];
    int u,v;
    for(int i=0;i<n-1;i++){
        
        cin>>u>>v;
        u--,v--;
        adj[u].push_back({v,i});
        adj[v].push_back({u,i});
    }

    vector<int> seen(n), pass(n);
    seen[0]=n;
    function<void(int,int)> dfs=[&](int u,int p){
        for(auto [v,i]: adj[u]){
            if(p==v) continue;
            seen[v]=i;
            pass[v]=pass[u]+(i<seen[u]);
            
            dfs(v,u);
        }
    };
    dfs(0,-1);

    int ans=*max_element(pass.begin(),pass.end());
    cout<<ans<<endl;

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