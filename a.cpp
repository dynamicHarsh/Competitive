#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n+1,0),temp(n+1,0);
    ll total=0;
    for(int i=1;i<=n;i++){
        cin>>a[i]; 
        total+=a[i];
    }
    sort(a.begin(),a.end());
    for(int i=1;i<=n;i++){
        temp[i]=a[i];
        if(i>=(k+1)) temp[i]+=temp[i-k-1]; 
    }

    vector<ll> ans;
    ll suff=0;
    for(int i=n;i>0;i--){
        ll calc=total-suff;
        if((i-k)>=0) calc-=temp[i-k];
        ans.push_back(calc);
        suff+=a[i];
    }
    int len=ans.size();
    for(int i=len-1;i>=0;i--){
        ll x=ans[i];
        cout<<x<<" ";
    }
    cout<<endl;
   



    
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