#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

vector<ll> adj[150005];
ll label[1500005];
ll sz[150005];
ll nedges[150005];

void relabel(ll u,ll target){
    if(label[u]==target) return;
    label[u]=target;
    for(auto x: adj[u]){
        relabel(x,target);
    }

}

void merge(ll u,ll v){
    adj[u].push_back(v);
    adj[v].push_back(u);
    ll lu=label[u],lv=label[v];
    ++nedges[lu];
    if(lu==lv) return;
    if(sz[lu]>sz[lv]){
        swap(lu,lv);
        swap(u,v);
    }

    relabel(u,lv);
    sz[lv]+=sz[lu];
    nedges[lv]+=nedges[lu];
}

void solve(){
    ll n,m,u,v;
    cin>>n>>m;
    for(ll i=0;i<n;i++){
        sz[i]=1;
        label[i]=i;
    }
    for(ll i=0;i<m;i++){
        cin>>u>>v;
        u--;v--;
        merge(u,v);
    }
    bool possible=1;
    for(ll i=0;i<n;i++){
        if(nedges[label[i]]!=(sz[label[i]]*(sz[label[i]]-1))/2){
            possible=0;
            break;
        }
    }
    cout<<(possible?"YES\n": "NO\n");
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