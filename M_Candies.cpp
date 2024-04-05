#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
ll dp[105][100005];

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for(auto& x: a){
        cin>>x;
    }
    for(int i=0;i<=a[0];i++){
        dp[0][i]=1;
    }
    for(int i=1;i<n;i++){

        vector<ll> prefix_sum(k+1);
        prefix_sum[0]=dp[i-1][0];
        for(int j=1;j<=k;j++){
            prefix_sum[j]=(prefix_sum[j-1]+dp[i-1][j])%mod;
        }
        for(int j=0;j<=k;j++){
            if(j>a[i])
            dp[i][j]=(prefix_sum[j]+mod-prefix_sum[j-a[i]-1])%mod;
            else
            dp[i][j]=prefix_sum[j];
        }
        
    }
    cout<<dp[n-1][k]<<endl;

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