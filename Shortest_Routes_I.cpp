#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define ar array
#define endl "\n"
ll dist[100005];
void solve(){
    int n,m;
    cin>>n>>m;
    vector<ar<ll,2>> adj[n];
    for(ll i=0,a,b,c;i<m;i++){
        cin>>a>>b>>c;
        a--,b--;
        adj[a].push_back({c,b});
    }
    memset(dist,0x3f,sizeof(dist));
       
    dist[0]=0;
    priority_queue<ar<ll,2>, vector<ar<ll,2>>, greater<ar<ll,2>>> pq;
    pq.push({0,0});
    while(pq.size()){
        ar<ll,2> u=pq.top();
        pq.pop();
        if(u[0]>dist[u[1]]){
            continue; //neglect it, because we already have a better answer to reach u[1]
        }
        for( ar<ll,2> v: adj[u[1]]){
            if(dist[v[1]]>u[0]+v[0]){
                dist[v[1]]=u[0]+v[0];
                pq.push({dist[v[1]],v[1]});
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<dist[i]<<" \n"[i==n-1];
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