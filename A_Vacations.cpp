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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    // dp[ind][choice]
    vector<vector<int>> dp(n,vector<int>(3,INT_MAX));
    if(a[0]==0){
        dp[0][0]=1;
    }
    else if(a[0]==1){
        dp[0][0]=1;
        dp[0][1]=0;
    }
    else if(a[0]==2){
        dp[0][0]=1;
        dp[0][2]=0;
    }
    else if(a[0]==3){
        dp[0][0]=1;
        dp[0][1]=0;
        dp[0][2]=0;
    }
    for(int i=1;i<n;i++){
        dp[i][0]=min({dp[i-1][0],dp[i-1][1],dp[i-1][2]})+1;
        if(a[i]==0) continue;
        if(a[i]==1){
            dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
        }
        else if(a[i]==2){
            dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
        }
        else{
            dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
            dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
        }
    }
    cout<<min({dp[n-1][0],dp[n-1][1],dp[n-1][2]})<<endl;
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