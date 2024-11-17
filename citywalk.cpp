#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n,a,b,c,d,p,q,y;
    cin>>n>>a>>b>>c>>d>>p>>q>>y;
    vector<ll> cord(n+1);
    for(int i=1;i<=n;i++) cin>>cord[i];
    ll ans=abs(cord[a]-cord[b])*p;
    ll atoc=abs(cord[a]-cord[c])*p;
    if(atoc>y) {
      cout<<ans<<endl;return;}
    ll ctod=abs(cord[c]-cord[d])*q;
    ll dtob= abs(cord[d]-cord[b])*p;
    ans=min(ans,y+ctod+dtob);
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