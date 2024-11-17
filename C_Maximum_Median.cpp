#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void solve(){
    ll n,k;
    cin>>n>>k;

    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    ll lo=0,hi=2e9,mid;
    sort(a,a+n);

    auto check=[&](ll mid)->bool{

        ll req=0;
        for(int i=n/2;i<n;i++){
            req+=max(0LL,mid-a[i]);
            if(req>k) return false;
        }
        return req<=k;


    };
    ll ans=0;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;

        if(check(mid)){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    
    cout<<hi<<endl;
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