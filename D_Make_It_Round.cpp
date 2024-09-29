#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n,m;
    cin>>n>>m;
    ll two=0,five=0,n0=n;
    while(n>0 && n%2==0){
        n/=2;
        two++;
    }
    while(n>0 && n%5==0){
        n/=5;
        five++;
    }
    ll k=1;
    while(two<five && k*2<=m){
        k*=2;
        two++;
    }
    while(five<two && k*5<=m){
        k*=5;
        five++;
    }
    while(k*10<=m && k*10<=m){
        k*=10;
    }
    if(k==1){
        cout<<n0*m<<endl;
    }
    else{
        k*=(m/k);
        cout<<n0*k<<endl;
    }
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