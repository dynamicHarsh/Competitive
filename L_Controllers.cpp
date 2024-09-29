#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll len;
    cin>>len;
    string s;
    cin>>s;
    ll p=0,n=0;
    for(auto ch: s){
        if(ch=='+') p++;
        else n++;
    }
    ll q;
    cin>>q;
    while(q--){
        ll a,b;
        cin>>a>>b;
        if(a>b) swap(a,b);
        if (a==b){
            if (p==n) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else{
            ll target=(p-n)*b;
            if (target%(b-a)) cout<<"NO\n";
            else {
                ll w=target/(b-a);
                if (w>=-n&&w<=p) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
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