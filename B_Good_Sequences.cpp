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
    vector<int> dp(n,0);
    vector<int> d(100005,0);


    int maxi=1;
    for(int i=0;i<n;i++){
        int e=a[i];
        dp[i]=d[e]=1;
        for(int j=2;j*j<=e;j++){
            if(e%j==0){
                dp[i]=max(dp[i],d[j]+1);
                dp[i]=max(dp[i],d[e/j]+1);
            }
        }
        for(int j=2;j*j<=e;j++){
            if(e%j==0){
                d[j]=dp[i];
                d[e/j]=dp[i];
            }
        }
        maxi=max(maxi,dp[i]);
    }

    cout<<maxi<<endl;



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