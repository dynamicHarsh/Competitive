#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n,m;
    cin>>n>>m;
    ull ans=1;
    ans=(ans*m)%mod;
    ans=(ans*(m-1))%mod;
    if(n>2){
        if(m>1)
        ans=(ans*(m-2))%mod;
    }

    
    cout<<(ans%mod*(n-1)%mod)%mod<<endl;
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