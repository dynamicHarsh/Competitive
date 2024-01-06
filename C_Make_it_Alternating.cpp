#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=998244353;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void prod(ll &a,ll x){
    a=(a*1LL*x)%mod;
}


void solve(){
    string s;
    cin>>s;
    int n=s.length();
    vector<ll> k;
    int cur=1;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            cur++;
        }
        else{
            k.push_back(cur);
            cur=1;
        }
    }
    k.push_back(cur);
    ll ans=1LL;
    cout<<n-k.size()<<" ";
    for(auto x: k){
        prod(ans,x);
    }
    for(ll i=1;i<=n-k.size();i++){
        prod(ans,i);
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