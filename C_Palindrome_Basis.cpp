#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

bool isPalin(int num){
    if(num<10) return true;
    int orig=num;
    int tmp=0;
    while(num>0){
        int rem=num%10;
        tmp=tmp*10+rem;
        num/=10;
    }
    return orig==tmp;
}
int n=40004;
void solve(){
    
    vector<ll> a;
    for(int i=0;i<=n;i++){
        if(isPalin(i)) a.push_back(i);
    }
    int m=a.size();
        vector<vector<ll>> dp(n,vector<ll> (m+1,0));
        for(int i=1;i<m;i++){
            dp[0][i]=1;
        }
        for(int i=1;i<n;i++){
            dp[i][0]=0;
            for(int j=1;j<m;j++){
                if(a[j]<=i){
                    dp[i][j]=(dp[i][j-1]+dp[i-a[j]][j])%mod;
                }
                else{
                    dp[i][j]=dp[i][j-1]%mod;
                }
            }
        }
        int t;
        cin>>t;
        while(t--){
            int num;
            cin>>num;
            cout<<dp[num][m-1]<<endl;
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