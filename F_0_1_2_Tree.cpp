#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    if(a!=c-1){
        cout<<"-1"<<endl;
        return;
    }
    ll h=log2(2*c-1);
    ll d=1<<h;
    d-=c;
    b=max(b-d,0LL);
    h=h+ceil(double(b)/double(c));
    cout<<h<<endl;
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