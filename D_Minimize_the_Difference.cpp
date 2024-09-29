#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long int lli;
const lli INF = 0xFFFFFFFFFFFFFFFLL;
 
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    lli n;
    cin>>n;
    lli a[n];
    for(lli i=0;i<n;i++) cin>>a[i];
    
    lli mini=INF,maxi=0;
    lli sum=0;
    for(lli i=0;i<n;i++){
        sum+=a[i];
        mini=min(mini,sum/(i+1));
    }
    reverse(a,a+n);
    sum=0;
    for(lli i=0;i<n;i++){
        sum+=a[i];
        maxi=max(maxi,(sum+i)/(i+1));
    }
    cout<<maxi-mini<<endl;

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