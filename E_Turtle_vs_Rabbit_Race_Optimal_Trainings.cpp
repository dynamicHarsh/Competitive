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
    int x;
    vector<ll> pre(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>x;
        pre[i]=pre[i-1]+x;
    }
    
    
    
    int q;
    cin>>q;
    while(q--){
        int l,u;
        cin>>l>>u;
        u+=pre[l-1];
        
        int ans=lower_bound(pre.begin(),pre.end(),u)-pre.begin();
        if(pre[ans]-u>u-pre[ans-1]) ans--;
        ans=max(l,ans);
        ans=min(ans,n);
        cout<<ans<<" \n"[q==0];
       
    }
   
    
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