#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

ll f(int ind,int wt,int w[],int v[],vector<vector<ll>> &dp){
    if(ind==0){
        if(w[0]<=wt){
            return v[0];
        }
        return 0;
    }
    if(dp[ind][wt]!=-1) return dp[ind][wt];
    ll notTake=0+f(ind-1,wt,w,v,dp);
    ll take=INT_MIN;
    if(w[ind]<=wt){
        take=v[ind]+f(ind-1,wt-w[ind],w,v,dp);
    }
    return dp[ind][wt]=max(take,notTake);
}


void solve(){
    int n,wt;
    cin>>n>>wt;
    int w[n],v[n];
    vector<vector<ll>> dp(n,vector<ll>(wt+1,0));
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    // f(n-1,wt,w,v,dp);
    // cout<<dp[n-1][wt];
    for(int i=w[0];i<=wt;i++){
        dp[0][i]=v[0];
    }
    for(int ind=1;ind<n;ind++){
        for(int ww=0;ww<=wt;ww++){
            ll notTake=0+dp[ind-1][ww];
            ll take=INT_MIN;
            if(w[ind]<=ww){
                take=v[ind]+dp[ind-1][ww-w[ind]];
            }
            dp[ind][ww]=max(take,notTake);
        }
    }
    cout<<dp[n-1][wt];
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