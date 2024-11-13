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

    function<int(int)> f=[&](int sum)->int{
        if(sum==0) return 1;
        if(sum<0) return 0;
        int ans=0;
        
        for(int i=1;i<=6;i++){
            ans+=f(sum-i);
        }
        return ans;
    };

    cout<<f(n)<<endl;


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