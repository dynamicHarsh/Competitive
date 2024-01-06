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
    int e;
   vector<ll> cnt(n+1,0);
    for(int i=0;i<n;i++){
        cin>>e;
        if(e<=n){
            cnt[e]++;
        }
    }
    vector<ll> ans(n+1,0);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            ans[j]+=cnt[i];
        }
    }
    cout<<*max_element(ans.begin(),ans.end())<<endl;
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