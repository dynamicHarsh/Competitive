#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

double dp[3000][3000];
vector<double> p(3000);


void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){cin>>p[i];}
    dp[0][0]=1-p[0];
    dp[0][1]=p[0];
    for(int i=1;i<n;i++){
        for(int j=0;j<3000;j++){
            //tails
            dp[i][j]+=(1-p[i])*dp[i-1][j];
            //heads
            if(j>0)
            dp[i][j]+=(p[i])*dp[i-1][j-1];
        }
    }
    double ans=0;
    for(int i=n/2+1;i<=n;i++){
        ans+=dp[n-1][i];
    }
    cout<<setprecision(9);
    cout<<fixed;
    cout<<ans;

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