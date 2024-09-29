#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n;
    cin>>n;
    ll x,y;
    vector<vector<bool>> a(n+1,vector<bool>(2,false));
    for(int i=0;i<n;i++){
        cin>>x>>y;
        a[x][y]=true;
    }
    ll ans=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<=1;j++){
            ans+=a[i][j] && a[i-1][!j] && a[i+1][!j];
        }
    }
    for(int i=0;i<=n;i++){
        if(a[i][0] && a[i][1])
        ans+=(n-2);
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