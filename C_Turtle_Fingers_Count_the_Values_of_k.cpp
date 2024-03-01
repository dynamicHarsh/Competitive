#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
long long power(long long a, long long b)
{
    long long result = 1;
    while (b) {
        if (b & 1)
            result = (result * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return result;
}
int log_a_to_base_b(int a, int b)
{
    return (log2(a) / log2(b));
}
void solve(){
    ll a,b,l;
    cin>>a>>b>>l;
    unordered_set<ll> ans;

    
    // cout<<lima<<" lima "<<limb<<" limb"<<endl;
    for(ll x=0;x<20;x++){
        ll ax=power(a,x);
        if(ax>l) break;
        for(ll y=0;y<20;y++){
            
            
            ll by=power(b,y);
            if(by>l) break;
            if((ax*by)>l){
                break;
            }
            if(l%(ax*by)==0){
                ans.insert(l/(ax*by));
                
            }
        }
    }
    cout<<ans.size()<<endl;
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