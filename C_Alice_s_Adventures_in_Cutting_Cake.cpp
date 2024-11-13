#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,m,v;
    cin>>n>>m>>v;
    ll a[n+1];
    for(ll i=1;i<=n;i++) cin>>a[i];
    vector<ll> pre(n+1,0);
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i];
    }
    vector<int> left(m+1);
    ll s=0,cnt=0;
    for(int i=1;i<=n;i++){
        s+=a[i];
        if(s>=v){
            cnt++;
            left[cnt]=i;
            s=0;
            if(cnt==m) break;
        }
    }
    if(cnt!=m){cout<<"-1"<<endl;return;}
    ll ans=pre[n]-pre[left[m]];
    int r=n;
    for(int i=m-1;i>=0;i--){
        s=0;
        while(s<v){
            s+=a[r];
            r--;
        }

        ans=max(ans,pre[r]-pre[left[i]]);
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