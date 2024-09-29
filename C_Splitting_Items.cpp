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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<ll>());
    for(int i=1;i<n;i+=2){
        int req=a[i-1]-a[i];
        if(req<=k){
            k-=req;
            a[i]=a[i-1];
        }
        else{
            a[i]+=k; 
            break;
        }
    }
    ll alice=0,bob=0;
    for(int i=0;i<n;i++){
        if(i%2==0) alice+=a[i];
        else bob+=a[i];
    }
    cout<<abs(alice-bob)<<endl;
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