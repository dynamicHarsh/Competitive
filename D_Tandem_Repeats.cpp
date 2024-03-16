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
    int ans=0;
    vector<int> pre(n);
    for(int len=1;len*2<=n;len++){
        fill(pre.begin(),pre.end(),0);
        for(int i=0;i+len<n;i++){
            pre[i]=(s[i]==s[i+len] || s[i]=='?' || s[i+len]=='?');
        }
        for(int i=1;i<n;i++){
            pre[i]+=pre[i-1];
        }
        if(pre[len-1]==len){
            ans=2*len;
        }
        for(int i=len;i<n;i++){
            if(pre[i]-pre[i-len]==len){
                ans=2*len;
            }
        }
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