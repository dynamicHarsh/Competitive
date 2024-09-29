#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int64_t n,sum=0,ans=0;
    cin>>n;
    int64_t a[n];
    for(int64_t i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    int64_t s=sum/2;
    ans=sum-s;
    for(int64_t i=n-1;i>=0;i--){
        if(s>0){
            s-=a[i];
            ans++;
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