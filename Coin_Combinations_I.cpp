#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
ll dp[1000005];
//no. of ways to form target dp[target];
void solve(){
    int n,target;
    cin>>n>>target;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    dp[0]=1;
    for(int i=1;i<=target;i++){
        for(auto x: a){
            if(i-x>=0){
                dp[i]=(dp[i]+dp[i-x])%mod;
            }
        }
    }
    cout<<dp[target]<<endl;
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