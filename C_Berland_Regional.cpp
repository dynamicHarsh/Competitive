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
    vector<ll> uni(n),st(n);
    for(int i=0;i<n;i++) cin>>uni[i];
    for(int i=0;i<n;i++) cin>>st[i];
    vector<vector<ll>> a(n);
    for(int i=0;i<n;i++){
        a[uni[i]-1].push_back(st[i]);
    }
    for(int i=0;i<n;i++){
        sort(a[i].begin(),a[i].end(),greater<ll>());
    }
   
     vector<vector<long long>> pr(n, vector<long long>(1, 0));
    for(int i=0;i<n;i++){
        for(ll x: a[i]){
            pr[i].push_back(pr[i].back()+x);
        }
    }
    vector<ll> ans(n+1,0);
    for(int i=0;i<n;i++){
        for(int k=1;k<=a[i].size();k++){
            ans[k]+=pr[i][(a[i].size()/k)*k];
        }
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

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