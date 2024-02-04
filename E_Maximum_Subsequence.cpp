#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
set<ll> getSubSum(int l,int r,int x,vector<ll> a){
    int len=r-l+1;
    set<ll> res;
    for(int i=0;i<(1LL<<len);i++){
        ll sum=0;
        for(int j=0;j<len;j++){
            if(i&(1LL<<j)){
                sum+=(a[l+j])%x;
            }
        }
        res.insert(sum%x);
    }
    return res;
}

void solve(){
    int n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(int i=0;i<n;i++){cin>>a[i];}
    set<ll> left=getSubSum(0,(n/2)-1,x,a);
    set<ll> right=getSubSum((n/2),n-1,x,a);
    
    ll ans=*left.rbegin();
    for(auto i: left){
       ans= max(ans,*prev(right.lower_bound(x - i)) + i);
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