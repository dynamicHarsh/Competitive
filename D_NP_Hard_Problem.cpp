#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
vector<ll> adj[100005];
bool vis[100005];
bool col[100005];
bool possible=1;

void dfs(int v,int c){
    if(vis[v]){
        return;
    }
    vis[v]=true;
    col[v]=c;
    for(auto x: adj[v]){
        if(!vis[x]){
            dfs(x,!c);
        }
        else{
            if(c==col[x]){
                possible=0;
                return;
            }
        }
    }
}

void solve(){
    ll n,m;
    cin>>n>>m;
    ll u,v;
    for(ll i=0;i<m;i++){
        cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    for(ll i=0;i<n;i++){
        if(!vis[i]){
            dfs(i,0);
        }
    }
    if(!possible){
        cout<<"-1\n";
    }
    else{
        int cnt[2]={0};
        for(int i=0;i<n;i++){
            cnt[col[i]]++;
        }
        cout<<cnt[0]<<"\n";
        for(int i=0;i<n;i++){
            if(col[i]==0){
                cout<<i+1<<" \n"[i==n-1];
            }
        }
        cout<<cnt[1]<<"\n";
        for(int i=0;i<n;i++){
            if(col[i]==1){
                cout<<i+1<<" \n"[i==n-1];
            }
        }
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