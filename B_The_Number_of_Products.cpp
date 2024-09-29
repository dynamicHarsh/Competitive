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
    ll a[n];
    ll a0=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            a0+=(i+1);
        }
    }
    ll ans=0;
    ll cntp=0,cntn=0,bal=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cntp=0,cntn=0,bal=0;
        }
        if(bal%2==0){
            cntp++;
        }
        else{
            cntn++;
        }
        if(a[i]<0){
            bal++;
        }
        if(bal%2==0){
            ans+=cntp;
        }
        else{
            ans+=cntn;
        }
    }
    cout<<n*1LL*(n+1)/2 - a0 - ans<<" "<<ans<<endl;
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