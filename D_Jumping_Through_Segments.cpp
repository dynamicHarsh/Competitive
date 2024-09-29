#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n;
    cin>>n;
    vector<vector<ll>> a(n,vector<ll> (2,0));
    
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
    }

    function<bool(ll)> check=[&](ll k)->bool{

        int ll=0,rr=0;
        for(int i=0;i<n;i++){
            ll=max(ll-k,a[i][0]);
            rr=min(rr+k,a[i][1]);
            if(ll>rr) return false;
        }
        return true;
    };

    ll lo=0,hi=1e9+10,mid;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(check(mid)){
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