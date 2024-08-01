#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    string s;
    cin>>s;
    s+="L";
    vector<int> dp(n+2,0);
    dp[0]=k;
    for(int i=1;i<=n+1;i++){
        if(s[i-1]=='L'){
            for(int t=1;t<=m;t++){
                if(i-t>=0)
                dp[i]=min(dp[i],dp[i-t]);
            }
        }
        else if(s[i-1]=='W'){
            dp[i]=min(dp[i],dp[i-2]+1);
        }
        else{
            continue;
        }
    }

    if(dp[n+1]<=k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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