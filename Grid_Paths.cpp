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
    string grid[n];
    for(int i=0;i<n;i++){
        cin>>grid[i];
    }
    vector<vector<ll>> dp(n,vector<ll> (n,0));
    if(grid[n-1][n-1]=='.'){
        dp[n-1][n-1]=1;
    }
    else{
        grid[n-1][n-1]=0;
        cout<<"0"<<endl;
        return;
    }
    for(int i=n-2;i>=0;i--){
        dp[i][n-1]=(grid[i][n-1]=='.')?dp[i+1][n-1]: 0;
        dp[n-1][i]=(grid[n-1][i]=='.')?dp[n-1][i+1]:0;
    }
    
    
    for(int i=n-2;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            if(grid[i][j]=='.'){
                dp[i][j]=(dp[i+1][j]+dp[i][j+1])%mod;
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    cout<<dp[0][0]<<endl;

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