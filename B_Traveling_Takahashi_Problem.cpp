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
    double x,y,px=0,py=0;
    double ans=0.0;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        ans+=hypot(x-px,y-py);
        px=x,py=y;
    }
    ans+=hypot(px,py);
    cout<<fixed<<setprecision(16)<<ans<<endl;

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