#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,m,u,v;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<int> q;
    vector<int> cnt(n+1,0),dist(n+1,INT_MAX);
    dist[1]=0;
    cnt[1]=1;
    q.push(1);
    while(!q.empty()){
        int cur=q.front();
        q.pop();


        for(auto nxt: adj[cur]){
            if(dist[nxt]>dist[cur]+1){
                dist[nxt]=dist[cur]+1;
                cnt[nxt]=cnt[cur];
                q.push(nxt);
            }
            else if(dist[nxt]==dist[cur]+1){
                cnt[nxt]=(cnt[nxt]+cnt[cur])%mod;
            }
        }
    }
    cout<<cnt[n]%mod<<endl;

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