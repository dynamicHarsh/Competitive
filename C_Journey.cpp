#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,u,v;
    cin>>n;
    vector<int> adj[n];
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    function<long double(int ,int)> dfs=[&](int u,int p)->long double{

        long double sum=0.0;
        for(auto child: adj[u]){
            if(child==p) continue;
            sum+=dfs(child,u)+1;
        }
        return sum?(sum/(adj[u].size()-(p!=-1))):0;
    };


    cout<<fixed<<setprecision(7)<<dfs(0,-1)<<endl;
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