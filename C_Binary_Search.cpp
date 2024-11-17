#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,x,pos;
    cin>>n>>x>>pos;


    int lo=0,hi=n,mid,small=0,big=0;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(mid==pos){
            lo=mid+1;
        }
        else if(mid<pos){
            lo=mid+1;
            small++;
        }
        else{
            hi=mid-1;
            big++;
        }
    }
    if(small+1>x || x> n-big){
        cout<<"0"<<endl;
        return;
    }
    int tbv=n-x,tsv=x-1;
    // cout<<big<<" "<<small<<endl;
    ll ans=1;
    while(big>0 && tbv>0){
        ans=(ans*tbv)%mod;
        tbv--;
        big--;
    }
    while(small>0 && tsv>0){
        ans=(ans*tsv)%mod;
        tsv--;
        small--;
    }
    int rest=(tsv>0?tsv:0)+(tbv>0?tbv:0);
    while(rest>0){
        ans=(ans*rest)%mod;
        rest--;
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