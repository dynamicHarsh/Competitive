#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"



void solve(){
    int row,col;
    cin>>row>>col;
    vector<vector<int>> dp(row+1,vector<int>(col+1,1e9));
    // dp[i][j]->no. of cuts required to convert mat of ixj into squares
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==j){
                dp[i][j]=0;
                continue;
            }
            //making horizontal cuts
            for(int k=1;k<=i-1;k++){
                dp[i][j]=min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
            }
            //making vertical cuts
            for(int k=1;k<=j-1;k++){
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
            }
        }
    }
    cout<<dp[row][col]<<endl;

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