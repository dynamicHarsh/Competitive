#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n,g,b;
    cin>>n>>g>>b;

    ll req=(n+1)/2;
    ll gds=(req+g-1)/g;

    ll bds=n/2;
    ll days=(gds-1)*g+(gds-1)*b+((req%g==0)?1:req%g);
    ll calc=bds-(gds-1)*b;
    if(calc>0) days+=calc;
    cout<<days<<endl;


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