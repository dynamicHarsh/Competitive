#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    int ind=1;
    while(ind<n && ind+a[ind]<=n){
        ind+=a[ind];
        if(ind==k){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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