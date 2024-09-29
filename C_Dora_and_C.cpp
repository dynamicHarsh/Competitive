#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    int x;
    int g=__gcd(a,b);
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>x;
        s.insert(x%g);
    }
    vector<int> v;
    for(auto x: s){
        v.push_back(x);
    }
    n=v.size();
    int ans=v[n-1]-v[0];
    for(int i=1;i<n;i++){
        // cout<<v[i]<<" ";
        ans=min(ans,v[i-1]+g-v[i]);
    }
    // cout<<endl;
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