#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int k,n;
    cin>>k>>n;
    int a[k];
    int q[n];
    int mini=INT_MAX;
    for(int i=0;i<k;i++){
        cin>>a[i];
        mini=min(mini,a[i]);
    }
    mini-=1;
    for(int i=0;i<n;i++){
        cin>>q[i];
    }
    for(int i=0;i<n;i++){
        cout<<min(q[i],mini)<<" \n"[i==n-1];
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