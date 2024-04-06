#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
vector<int> adj[100005];
int c[100005];
void dfs(int i,int cu=0){
    if(c[i]>=0){
        if(c[i]^cu){
            cout<<"IMPOSSIBLE"<<endl;
            exit(0);
        }
        return;
    }
    c[i]=cu;
    for(auto v: adj[i]){
        dfs(v,cu^1);
    }
}
void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=0,a,b;i<m;i++){
        cin>>a>>b;
        a--,b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(c,-1,4*n);

    for(int i=0;i<n;i++){
        if(c[i]<0){
            dfs(i);
        }
    }
    for(int i=0;i<n;i++){
        cout<<c[i]+1<<" ";
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