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
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    if(*max_element(a,a+n)==*min_element(a,a+n) || a[0]!=a[n-1]){
      cout<<"-1\n";
      return ;
    }
    
    int cnt=0,ans=INT_MAX;
    for(int i=0;i<n;i++){
      if(a[i]==a[0]){
        cnt++;
      }
      else{
        ans=min(ans,cnt);
        cnt=0;
      }
    }
    ans=min(ans,cnt);
    cout<<ans<<"\n";

    
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