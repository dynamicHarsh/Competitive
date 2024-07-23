#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,x;
    cin>>n>>x;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int64_t> pre(n+1,0);
    for(int i=0;i<n;i++){
        pre[i+1]=a[i]+pre[i];
    }
    ll ans=(int64_t)n*(n+1)/2;
    vector<int64_t> dp(n+1,0);
    for(int i=n-1;i>=0;i--){
        auto it=lower_bound(pre.begin(),pre.end(),pre[i]+x+1);
        int ind=int(it-pre.begin());
        dp[i]=(ind==n+1)?0:dp[ind]+1;
        ans-=dp[i];
    }
    cout<<ans<<endl;
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