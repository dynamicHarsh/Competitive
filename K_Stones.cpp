#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
int dp[100005]; 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto&x: a){
        cin>>x;
    }
    dp[0]=0;
    for(int i=1;i<=k;i++){
        for(auto x: a){
            if(i>=x && dp[i-x]==0){
                dp[i]=1;
                break;
            }
        }
    }
    if(dp[k]==1){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }

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