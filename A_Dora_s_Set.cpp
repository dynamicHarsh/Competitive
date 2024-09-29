#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int l,r;
    cin>>l>>r;
    int ans=0;
    l=(l%2==1)?l:l+1;
    r=(r%2==1)?r:r-1;
    for(int i=l;(i+2)<=r;i+=4){
        ans++;
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