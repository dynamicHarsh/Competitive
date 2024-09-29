#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ull n,k;
    cin>>n>>k;
    ull a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    ull maxi=a[0];
    for(int i=1;i<n;i++){
      if(i*(a[i]-a[i-1])<=k){
        maxi=a[i];
        k-=i*(a[i]-a[i-1]);
      }
      else{
        maxi+=k/i;
        k=k%i;
        break;
      }
    }

    ull ans=(maxi*n)-(n-1);
    ans+=k;
    for(int i=0;i<n;i++){
      if(a[i]>maxi) ans++;
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