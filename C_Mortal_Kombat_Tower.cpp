#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
ll dp[200005][2];
// dp[index][player]->skip points used uptil index when the move is of player  
void solve(){
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    dp[0][0]=a[0];
    dp[0][1]=1e18;
    dp[1][0]=a[0]+a[1];
    dp[1][1]=a[0];
    for(int i=2;i<n;i++){
        dp[i][0]=min(dp[i-1][1]+a[i],dp[i-2][1]+a[i-1]+a[i]);
        dp[i][1]=min(dp[i-1][0],dp[i-2][0]);
    }
    cout<<min(dp[n-1][0],dp[n-1][1])<<endl;

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