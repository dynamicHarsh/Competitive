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
    ll a[m];
    for(int i=0;i<m;i++){ cin>>a[i]; --a[i];}
    vector<ll> cnt(n,0);
    for(int i=0;i<m;i++){
        cnt[a[i]]++;
    }
    ll lo=0,hi=(2*m);
    ll ans=0;
    while(lo<=hi){
        ll mid=(lo+hi)>>1;

        ll extra=0,need=0;
        for(auto cap: cnt){
            if(cap<=mid){
                extra+=(mid-cap)/2;
            }
            else{
                need+=cap-mid;
            }
        }
        if(extra>=need){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    cout<<lo<<endl;
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