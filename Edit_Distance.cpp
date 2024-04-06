#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    string s,t;
    cin>>s>>t;
    int n=s.length();
    int m=t.length();
    vector<vector<int>> dp(n+1,vector<int> (m+1,0));//dp[len1][len2]->min no of operations to convert string s of len1 to string t of len2
    for(int i=0;i<=n;i++){
        dp[i][0]=i;
    }
    for(int i=0;i<=m;i++){
        dp[0][i]=i;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                ll op1=min(dp[i-1][j],dp[i][j-1]);
                ll op2=dp[i-1][j-1];
                dp[i][j]=min(op1,op2)+1;
            }
        }
    }
    cout<<dp[n][m]<<endl;


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