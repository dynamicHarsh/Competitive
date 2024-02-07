#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int x[4][2];
    for(int i=0;i<4;i++){
        cin>>x[i][0]>>x[i][1];
    }
    ll a=(x[1][0]-x[0][0])*(x[1][0]-x[0][0])+(x[1][1]-x[0][1])*(x[1][1]-x[0][1]);
    ll b=(x[2][0]-x[0][0])*(x[2][0]-x[0][0])+(x[2][1]-x[0][1])*(x[2][1]-x[0][1]);
    ll ans=min(a,b);
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