#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
vector<ll> getSubSum(int l,int r,vector<ll> a){
    int len=r-l+1;
    vector<ll> res;
    for(int i=0;i<(1LL<<len);i++){
        ll sum=0;
        for(int j=0;j<len;j++){
            if(i&(1LL<<j)){
                sum+=a[l+j];
            }
        }
        res.pb(sum);
    }
    return res;
}

void solve(){
    int n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(int i=0;i<n;i++){cin>>a[i];}
    vector<ll> left=getSubSum(0,(n/2)-1,a);
    vector<ll> right=getSubSum((n/2),n-1,a);
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    ull ans=0;
    for(auto i: left){
        auto lo=lower_bound(right.begin(),right.end(),x-i)-right.begin();
        auto hi=upper_bound(right.begin(),right.end(),x-i)-right.begin();
        ans+=(hi-lo);
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