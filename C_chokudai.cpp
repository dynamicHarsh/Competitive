#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    // dp[ind1,ind2]->no. of ways to form chokudai upto ind2 from str upto ind1
    string s;
    cin>>s;
    string c="chokudai";
    int n=s.length(),m=c.length();
    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    function<int(int,int)> f=[&](int ind1,int ind2)->int{
        if(ind1==n || ind2==m){
            return ind2==m;
        }
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        int take=0;
        if(s[ind1]==c[ind2]) take=f(ind1+1,ind2+1);
        int notTake=f(ind1+1,ind2);

        return dp[ind1][ind2]=(take+notTake)%mod;
    };
    cout<<f(0,0)<<endl;
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