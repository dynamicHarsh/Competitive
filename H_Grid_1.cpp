#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
char grid[1005][1005];
int dp[1005][1005];
int h,w;
ll f(int i,int j){
    if(i>=h || j>=w || grid[i][j]=='#') return 0;
    if(i==h-1 && j==w-1) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    int right=f(i,j+1);
    int down=f(i+1,j);
    return dp[i][j]=(right%mod+down%mod)%mod;
}
void solve(){
    memset(dp,-1,sizeof(dp));
    cin>>h>>w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>grid[i][j];
        }
    }
    f(0,0);
    cout<<dp[0][0];
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