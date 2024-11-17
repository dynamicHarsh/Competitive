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
    vector<vector<ll>> a(n + 1, vector<ll>(2, 0));

    for (int i = 1; i <= n; i++) cin >> a[i][0];
    for (int i = 1; i <= n; i++) cin >> a[i][1];

    
    sort(a.begin() + 1, a.end(), [](const vector<ll>& v1, const vector<ll>& v2) {
        return v1[0] < v2[0];
    });

    for(int i=n-1;i>0;i--){
      a[i][1]+=a[i+1][1];
    }


    ll ans=a[n][0];
    for(int i=0;i<n;i++){
      if(max(a[i][0],a[i+1][1])<ans){
        ans=max(a[i][0],a[i+1][1]);
        
      }
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