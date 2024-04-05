#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

// dp[index][target]->no. of ways to form target if i am at index;
void solve(){
    int n,target;
    cin>>n>>target;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<vector<int>> dp(n,vector<int> (target+1,0));
    for(int t=0;t<=target;t++){
        dp[0][t]=(t%a[0]==0);
    }
   for(int i=1;i<n;i++){
         for(int t=0;t<=target;t++){
            ll notTake=dp[i-1][t];
            ll take=0;
            if(t>=a[i])
            take=dp[i][t-a[i]];
            dp[i][t]=(notTake+take)%mod;
        }
    }
    cout<<dp[n-1][target]<<endl;


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