#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
ll f(int ind,int val,int w[],int v[],vector<vector<ll>> &dp){
    if(val==0) return 0;
    if(ind<0) return 1e15;

    if(dp[ind][val]!=-1) return dp[ind][val];
    ll notTake=0+f(ind-1,val,w,v,dp);
    ll take=INT_MAX;
    if(val>=v[ind]){
        take=f(ind-1,val-v[ind],w,v,dp)+w[ind];
    }
    return dp[ind][val]=min(take,notTake);
}


void solve(){
    int n,wt;
    cin>>n>>wt;
    int w[n],v[n];
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    vector<vector<ll>> dp(105,vector<ll> (100005,-1));
    for(int val=1e5;val>=0;val--){
        if(f(n-1,val,w,v,dp)<=wt){
            cout<<val;
            break;
        }
    }
    
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