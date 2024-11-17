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
    vector<ll> city(n),cell(m);
    for(auto&x : city){
        cin>>x;
    }
    for(auto &x: cell){
        cin>>x;
    }


    auto check=[&](ll mid)->bool{

        for(int i=0;i<n;i++){
            ll x=city[i];
            auto lower = std::lower_bound(cell.begin(), cell.end(), city[i]-mid);
            if(lower==cell.end() || *lower > city[i]+mid) return false;
            
        }
        return true;
    };

    ll lo=0,hi=1e15;
    ll ans=hi;
    while(lo<=hi){
        ll mid=lo+(hi-lo)/2;

        if(check(mid)){
            ans=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
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