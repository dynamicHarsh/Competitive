#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll l,r;
    cin>>l>>r;
    ll lo=0,hi=200005;
    auto f=[&](ll i)->bool{
        ll c=l+((i*(i+1))/2);
        return c<=r;
    };
    while(lo<=hi){
        int mid=(lo+hi)>>1;
        if(f(mid)){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    cout<<hi+1<<endl;
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