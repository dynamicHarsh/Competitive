#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

// dp[n]->no. of digits to be subtracted to reach 0
void solve(){
    int n;
    cin>>n;
    vector<int> dp(n+1,1e9);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        string num=to_string(i);
        for(auto c: num){
            int dig=c-'0';
            if(dig!=0){
                dp[i]=min(dp[i],dp[i-dig]+1);
            }
        }
    }
    cout<<dp[n]<<endl;
    
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