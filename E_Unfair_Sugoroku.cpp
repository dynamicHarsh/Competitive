#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=998244353;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

ll binexp(ll a,ll pow){
    if(pow==0) return 1;

    ll ans=binexp(a,pow/2);
    ans=(ans*ans)%mod;

    return (pow%2)?(ans*a)%mod:ans;

}

ll mulinv(ll a){
    return binexp(a,mod-2);
}

void solve(){
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;

    vector<vector<int>> dp1(n+1,vector<int>(n+1,0)),dp2(n+1,vector<int>(n+1,0));
    dp1[0][0]=dp2[0][0]=1;

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n-a;j++){
            for(ll k=1;k<=p;k++){
                dp1[i+1][min(j+k,n-a)]=(dp1[i+1][min(j+k,n-a)]+(dp1[i][j]*mulinv(p))%mod)%mod;
            }
        }
    }

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n-b;j++){
            for(ll k=1;k<=q;k++){
                dp2[i+1][min(j+k,n-b)]=(dp2[i+1][min(j+k,n-b)]+(dp2[i][j]*mulinv(q))%mod)%mod;
            }
        }
    }

    ll ans=0;

    for(ll i=1;i<=n;i++){

        ll x=dp1[i][n-a];
        ll y=0;

        for(int j=0;j<n-b;j++){
            y=(y+dp2[i-1][j])%mod;
        }
        ans=(ans+(x*y)%mod)%mod;
    }
    cout<<ans<<endl;

    
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