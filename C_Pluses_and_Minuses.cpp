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
    
    int n=s.length();
    vector<int> pre(n);
    if(s[0]=='+') pre[0]=1;
    else pre[0]=-1;
    for(int i=1;i<n;i++){
       if(s[i]=='+'){
        pre[i]=pre[i-1]+1;
       }
       else{
        pre[i]=pre[i-1]-1;
       }
    }
    ll ans=0;

    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
        if(pre[i]>=0){
            ans++;
        }
        else{
            ans+=(i+1);
        }
    }
    cout<<endl;
    // cout<<ans<<endl;
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