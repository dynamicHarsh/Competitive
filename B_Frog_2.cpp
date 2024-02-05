#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
int f(int ind,int k,vector<int> &h,vector<int> &dp){
    if(ind<=0){
        return 0;
    }
    if(dp[ind]!=-1) return dp[ind];
    int ans=INT_MAX;
    for(int i=1;i<=k;i++){
        if(ind-i>=0){
            ans=min(ans,f(ind-i,k,h,dp)+abs(h[ind]-h[ind-i]));
        }
    }
    return dp[ind]=ans;
}

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> h(n);
    for(int i=0;i<n;i++){cin>>h[i];}
   
    vector<int> dp(n,INT_MAX);
    // f(n-1,k,h,dp);
    // cout<<dp[n-1];
    dp[0]=0;
    for(int ind=1;ind<n;ind++){
        for(int i=1;i<=k;i++){
            if(ind-i>=0)
            dp[ind]=min(dp[ind],dp[ind-i]+abs(h[ind]-h[ind-i]));
        }
    }
    cout<<dp[n-1];




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