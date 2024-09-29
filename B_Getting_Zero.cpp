#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

int f(int num){
    int n;
    cin>>n;
}

void solve(){
    int n;
    cin>>n;
    int x=32768;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<ll>> adj(x);
    for(int i=0;i<x;i++){
        adj[(2*i)%x].push_back(i);
        adj[(i+1)%x].push_back(i);
    }

    queue<int> q;
    q.push(0);
    vector<bool> vis(x,false);
    vector<ll> dis(x);
    vis[0]=true;
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(auto x: adj[cur]){
            if(!vis[x]){
                vis[x]=true;
                dis[x]=dis[cur]+1;
                q.push(x);
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<dis[a[i]]<<" ";
    }
    cout<<endl;

}
 
int main(){
    ios::sync_with_stdio(false);
      cin.tie(0);
 
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    // cout<<endl;
    }
    return 0;
}