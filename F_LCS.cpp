#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
string s,t;

int f(int ind1,int ind2,vector<vector<int>> &dp){
    if(ind1==0 || ind2==0) return 0;
    if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
    if(s[ind1-1]==t[ind2-1]){
        return dp[ind1][ind2]=1+f(ind1-1,ind2-1,dp);
    }
    return dp[ind1][ind2]=max(f(ind1-1,ind2,dp),f(ind1,ind2-1,dp));
}


void solve(){
    
    cin>>s>>t;
    int n=s.length();
    int m=t.length();
    vector<vector<int>> dp(n+1,vector<int> (m+1,0));
    for(int ind1=1;ind1<=n;ind1++){
        for(int ind2=1;ind2<=m;ind2++){
            if(s[ind1-1]==t[ind2-1]){
                dp[ind1][ind2]=1+dp[ind1-1][ind2-1];
            }
            else{
                dp[ind1][ind2]=max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
            }
        }
    }
   
    string lcs="";
    int ind1=n,ind2=m;
    while(ind1>0 && ind2>0){
        if(s[ind1-1]==t[ind2-1]){
            lcs+=s[ind1-1];
            ind1--,ind2--;
        }
        else if(dp[ind1-1][ind2]>dp[ind1][ind2-1]){
            ind1--;
        }
        else{
            ind2--;
        }
    }
    reverse(lcs.begin(),lcs.end());
    cout<<lcs<<endl;
   
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