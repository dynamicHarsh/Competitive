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
    vector<int> adj[n+1];
    for(int i=1;i<n;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> height_dp(n+1,0);

    function<int(int,int)> height=[&](int node,int parent)->int{
        int ans=0;
        for(auto child: adj[node]){
            if(child!=parent){
                ans=max(ans,height(child,node)+1);
            }
        }
         return height_dp[node]=ans;
    };
    function<int(int,int)> dfs=[&](int node,int parent)->int{
        int maxi1=0,maxi2=0,ans=0;

        for(auto child: adj[node]){
            if(child==parent) continue;
            int h=height_dp[child]+1;
            if(h>maxi1){
                maxi2=maxi1;
                maxi1=h;
            }
            else if(h>maxi2){
                maxi2=h;
            }
            ans=max(ans,dfs(child,node));
            
            
        }
        ans=max(ans,maxi1+maxi2);
        return ans;
    };


    height(1,0);
    cout<<dfs(1,0)<<endl;
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