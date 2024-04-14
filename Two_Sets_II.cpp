#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
const int m=500;
ll dp[(m*(m+1)/2)+1]; 
void solve(){
    ll n;
    cin>>n;
    ll s=(n*(n+1))/2;
    if(s&1){
        cout<<"0"<<endl;
        return;
    }
    dp[0]=1;
    for(int i=1;i<n;i++){
        for(int j=i*(i+1)/2;j>=i;j--){
            dp[j]=(dp[j]+dp[j-i])%mod;
        }
    }
    cout<<dp[s/2]%mod<<endl;

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