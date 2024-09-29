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
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    map<tuple<ll,ll,ll>,ll> m;
    ll ans=0;
    for(int i=0;i<n-2;i++){
        ans+=m[{a[i],a[i+1],0}]++ + m[{a[i],0,a[i+2]}]++ + m[{0,a[i+1],a[i+2]}]++ -3* m[{a[i],a[i+1],a[i+2]}]++;
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