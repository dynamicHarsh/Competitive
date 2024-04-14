#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
ll dp[5005][5005][2];
void solve(){
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        dp[i][i][0]=a[i];
        dp[i][i][1]=0;
    }
    for(int RminusL=1;RminusL<n;RminusL++){
        for(int L=0;L+RminusL<n;L++){
            int R=L+RminusL;
            dp[L][R][0]=max(dp[L+1][R][1]+a[L],dp[L][R-1][1]+a[R]);
            dp[L][R][1]=min(dp[L+1][R][0],dp[L][R-1][0]);
        }
    }
    cout<<dp[0][n-1][0]<<endl;
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