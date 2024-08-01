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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int lim=1<<20;
    vector<int> dp(lim,200);
    
    dp[0]=0;
    for(auto x: a){

        if(x==0) continue;
        vector<bool> res(lim,false);

        for(int i=0;i<lim;i++){
            if(res[i]) continue;
            if(dp[i]>dp[i^x]){
                dp[i]=dp[i^x]+1;
            }
            else if(dp[i^x]>dp[i]){
                dp[i^x]=dp[i]+1;
            }
            res[i^x]=true;
        }

    }
    int el=lim-1;
    int maxops=n/2;
    while(dp[el]>maxops){
        el--;
    }
    cout<<el<<endl;
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