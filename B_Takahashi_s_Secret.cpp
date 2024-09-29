#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,x;
    cin>>n>>x;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];


    function<void(int)> dfs=[&](int node){
        if(node==0) return;
        int nxt=a[node];
        a[node]=0;
        dfs(nxt);
    };

    dfs(x);
    int ans=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0){ans++;}
    }
    cout<<ans<<endl;


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