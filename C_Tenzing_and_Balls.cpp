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
    int a[n+1];
    
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<int> dp(n+1,INT_MIN);
    vector<int> mx(n+1,INT_MIN);
    dp[1]=0;
    mx[a[1]]=-1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1];
        dp[i]=max(dp[i],i+1+mx[a[i]]);
        mx[a[i]]=max(mx[a[i]],dp[i-1]-i);
    }
    cout<<dp[n]<<"\n";
}
 
int main(){
    ios::sync_with_stdio(false);
      cin.tie(0);
 
    int t=1;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}