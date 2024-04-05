#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int ar,ac,br,bc,cr,cc;
    cin>>ar>>ac>>br>>bc>>cr>>cc;
    int ans=0;
    if((bc-ac>=0 && cc-ac>=0) || ((ac-bc)>=0 && (ac-cc)>=0)){
        ans+=min(abs(bc-ac),abs(cc-ac));
    }
    if((br-ar>=0 && cr-ar>=0) || ((ar-br)>=0 && (ar-cr)>=0)){
        ans+=min(abs(br-ar),abs(cr-ar));
    }
    cout<<ans+1<<endl;
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