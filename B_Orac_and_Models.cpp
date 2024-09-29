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
    ll a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<ll> dp(n+1,1LL);
    ll maxi=0;
    for(int i=1;i<=n;i++){
        for(int j=2*i;j<=n;j+=i){
            if(a[j]>a[i]){
                dp[j]=max(dp[j],dp[i]+1);
            }
        }
        maxi=max(dp[i],maxi);
    }
    
    cout<<maxi<<endl;

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