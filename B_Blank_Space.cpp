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
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    int cnt=a[0]==0?1:0;
    for(int i=1;i<n;i++){
        if(a[i]==0){
            cnt++;
        }
        else if(a[i]!=a[i-1]){
            ans=max(ans,cnt);
            cnt=0;
        }
    }
    ans=max(ans,cnt);
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