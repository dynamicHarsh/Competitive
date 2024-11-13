#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<int> dp(n+1,INT_MIN);
    dp[0]=0;

    for(int i=1;i<=n;i++){
        if(i>=a) dp[i]=max(dp[i],dp[i-a]+1);
        if(i>=b) dp[i]=max(dp[i],dp[i-b]+1);
        if(i>=c) dp[i]=max(dp[i],dp[i-c]+1);
    }
    cout<<dp[n]<<endl;
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