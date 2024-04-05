#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,x;
    cin>>n>>x;
    int price[n],pages[n];
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    for(int i=0;i<n;i++){
        cin>>pages[i];
    }
    // vector<vector<ll>> dp(n+1,vector<ll> (x+1,0));
    vector<ll> prev(x+1,0);
    vector<ll> cur(x+1,0);
    for(int i=1;i<=n;i++){
        for(int p=0;p<=x;p++){
            ll notTake=0+prev[p];
            ll take=0;
            if(price[i-1]<=p){
                take=pages[i-1]+prev[p-price[i-1]];
            }
            cur[p]=max(take,notTake);
        }
        prev=cur;
    }
    
    cout<<cur[x]<<endl;
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