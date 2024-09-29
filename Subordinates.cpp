#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n;
    cin>>n;
    int parent;
    vector<int> adj[n+1];
    for(int i=2;i<=n;i++){
        cin>>parent;
        adj[parent].push_back(i);
    }

    vector<int> sub(n+1,1);

    function<void(int)> dfs=[&](int node){
        for(auto nxt: adj[node]){
            dfs(nxt);
            sub[node]+=sub[nxt];
        }
    };
    dfs(1);
    
    for(int i=1;i<=n;i++){
        cout<<sub[i]-1<<" ";
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
    }
    return 0;
}