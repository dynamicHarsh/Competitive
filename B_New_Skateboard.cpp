#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    string s;
    cin>>s;
    ll n=s.length();
    ll ans=0;
    for(ll i=n-1;i>0;i--){
        int num1=s[i]-'0';
        int num2=s[i-1]-'0';
        if(num1%4==0) ans+=1LL;
        if((num2*10+num1)%4==0) ans+=i;
    }
    if((s[0]-'0')%4==0) ans+=1LL;

    
    cout<<ans<<endl;
}
 
int main(){
    ios::sync_with_stdio(false);
      cin.tie(0);
 
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
    return 0;
}