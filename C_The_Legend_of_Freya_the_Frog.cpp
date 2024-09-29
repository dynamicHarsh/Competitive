#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll x,y,k;
    cin>>x>>y>>k;
    if(x==0 && y==0){cout<<"0"<<endl;
    return;}
    ll ans=0;
    ll xmove=(x/k)+((x%k!=0)?1LL:0);
    ll ymove=(y/k)+((y%k!=0)?1LL:0);
    if(xmove>ymove){
        ans=(2LL*xmove)-1;
    }
    else{
        ans=(2LL*ymove);
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