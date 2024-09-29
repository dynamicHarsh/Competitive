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
    vector<ll> a(n);
    ll maxi=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi=max(a[i],maxi);
    }
    for(int i=0;i<n;i++){
        if((maxi-a[i])%(2*k)>=k){
            maxi+=2*k-(maxi-a[i])%(2*k);
        }
    }
    for(int i=0;i<n;i++){
        if((maxi-a[i])%(2*k)>=k){
            maxi=-1;
            break;
        }
    }
    cout<<maxi<<endl;

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