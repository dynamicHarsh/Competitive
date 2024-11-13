#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef int64_t i64;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    i64 k;
    cin>>k;

    i64 lo=1,hi=2e18,mid;
    while(hi-lo>1){
        mid=lo+(hi-lo)/2;
        i64 n=mid-(int)sqrt(mid);
        if(n>=k){
            hi=mid;
        }
        else{
            lo=mid;
        }
    }
    cout<<hi<<endl;
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