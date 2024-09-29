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
    string s;
    cin>>s;
    vector<ll> l(n,0);
    vector<ll> r(n,0);
    ll star=s[0]=='*'?1:0;
    for(int i=1;i<n;i++){
        if(s[i]=='.') l[i]=l[i-1]+star;
        else {
            l[i]=l[i-1];
            star++;
        }
        // cout<<l[i]<<" ";
    }
    // cout<<endl;
    star=s[n-1]=='*'?1:0;
    for(int i=n-2;i>=0;i--){
        if(s[i]=='.') r[i]=r[i+1]+star;
        else{
            r[i]=r[i+1];
            star++;
        }
        // cout<<r[i]<<" ";
        
    }
    // cout<<endl;
    ll ans=1e15;


    ans=min(r[0],l[n-1]);
    for(int i=1;i<n-1;i++){
        ans=min(ans,l[i]+r[i+1]);
        ans=min(ans,l[i-1]+r[i]);
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