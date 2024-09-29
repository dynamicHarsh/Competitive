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
    int a=0,b=0,c=0,d=0,q=0;
    for(int i=0;i<4*n;i++){
        if(s[i]=='A') a++;
        else if(s[i]=='B') b++;
        else if(s[i]=='C') c++;
        else if(s[i]=='D') d++;
        else q++;
    }
    int ans=0;
    ans+=min(a,n);
    ans+=min(b,n);
    ans+=min(c,n);
    ans+=min(d,n);
    
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