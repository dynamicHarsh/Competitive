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
    ll ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;i*j<=n && i+j<=x;j++){
            ans+=min((n-i*j)/(i+j),x-(i+j));
        }
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