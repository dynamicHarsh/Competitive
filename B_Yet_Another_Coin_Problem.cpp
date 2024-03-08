#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n;
    cin>>n;
    

    ll sum=0;
    ll ans=INT_MAX;
     for(int one=0;one<=2;one++){
        for(int three=0;three<=1;three++){
            for(int six=0;six<=4;six++){
                for(int ten=0;ten<=2;ten++){
                    sum=1*one+3*three+6*six+10*ten;
                    if(sum<=n && (n-sum)%15==0){
                        ans=min(ans,one+three+six+ten+(n-sum)/15);
                    }
                }
            }
        }
    }
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