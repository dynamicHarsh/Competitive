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
    int a[n],b[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){cin>>b[i];}
    ll ans=0,sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<min(n,k);i++){
        sum+=a[i];
        maxi=max(maxi,b[i]);
        ans=max(ans,sum+maxi*(k-i-1));
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