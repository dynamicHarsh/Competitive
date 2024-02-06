#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
double dp[301][301][301];
int cnt[4];
void solve(){
    int n;
    cin>>n;
    
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        cnt[x]++;
    }
    dp[0][0][0]=0;
    for(int three=0;three<=n;three++){
        for(int two=0;two<=n;two++){
            for(int one=0;one<=n;one++){
                int zero=n-three-two-one;
                if(zero==n){continue;}
                if(three+two+one>n){continue;}
                double val=1.0;
                if(three>0)
                val+=(1.0*three/n)*dp[three-1][two+1][one];
                if(two>0)
                val+=(1.0*two/n)*dp[three][two-1][one+1];
                if(one>0)
                val+=(1.0*one/n)*dp[three][two][one-1];
                dp[three][two][one]=val/(1-1.0*zero/n);
            }
        }
    }
    
    cout<<setprecision(10);
    cout<<fixed;
    cout<<dp[cnt[3]][cnt[2]][cnt[1]];
    
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