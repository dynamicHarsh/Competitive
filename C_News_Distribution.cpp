#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

vector<ll> adj[500005];
bool vis[500005];
void solve(){
    ll n,m;
    cin>>n>>m;
    
    for(ll i=0;i<m;i++){
        ll k;
        cin>>k;
        vector<ll> v(k);
        for(int j=0;j<k;j++){
            cin>>v[j];
            --v[j];
        }
        for(int j=0;j<k-1;j++){
            adj[v[j]].push_back(v[j+1]);
            adj[v[j+1]].push_back(v[j]);
        }

    }
    vector<ll> ans(n);
    for(ll i=0;i<n;i++){
        if(!vis[i]){
            vector<ll> components;
            queue<ll> q;
            q.push(i);
            while(!q.empty()){
                ll x=q.front();
                q.pop();
                if(vis[x]){
                    continue;
                }
                vis[x]=1;
                components.push_back(x);
                for(ll y: adj[x]){
                    if(!vis[y]){
                        q.push(y);
                    }
                }
            }
            for(auto e: components){
                ans[e]=components.size();
            }
        }
        
    }
    for(auto e: ans){
        cout<<e<<" ";
    }
    cout<<"\n";

    


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