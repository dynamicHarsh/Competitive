#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,m;
    cin>>n>>m;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<ll>> dp(n+1,vector<ll> (m+1,0));
    for(int k=1;k<=m;k++){
        if(a[0]==0 || a[0]==k){
            dp[1][k]=1;
        }
    }
    for(int i=2;i<=n;i++){
        for(int k=1;k<=m;k++){
            if(a[i-1]!=0 && a[i-1]!=k){
                continue;
            }
            dp[i][k]=(((dp[i][k]+(k>1?dp[i-1][k-1]:0))%mod+dp[i-1][k])%mod+(k<m?dp[i-1][k+1]:0))%mod;
        }
    }
    ll ans=0;
    for(int i=1;i<=m;i++){
       ans=(ans+dp[n][i])%mod;
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