#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void solve(){
    ll n,m,q;
    cin>>n>>m>>q;
    ll a,b,c;
    vector<vector<ll>> adj(n+1,vector<ll> (n+1,1e18));
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        a--,b--;
        adj[a][b]=min(adj[a][b],c);
        adj[b][a]=min(adj[b][a],c);
    }
    for(int i=0;i<n;i++){
        adj[i][i]=0;
    }
    for(int via=0;via<n;via++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                adj[i][j]=min(adj[i][j],adj[i][via]+adj[via][j]);
            }
        }
    }
    int u,v;
    while(q--){
        cin>>u>>v;
        u--,v--;
        if(adj[u][v]==1e18){
            cout<<"-1"<<endl;
            continue;
        }
        cout<<adj[u][v]<<endl;

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