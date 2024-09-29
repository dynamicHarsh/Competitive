#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    int maxi=INT_MIN;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%k==0) continue;
        mp[k-a[i]%k]++;
        maxi=max(mp[k-a[i]%k],maxi);
    }
    ll ans=0;
    for(auto [key,value]: mp){
        if(value==maxi){
            ans=k*1LL*(value-1)+key+1;
        }
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