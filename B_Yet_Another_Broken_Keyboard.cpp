#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    char ch;
    vector<bool> avail(26,false);
    
    for(int i=0;i<k;i++){
        cin>>ch;
        avail[ch-'a']=true;
    }
   
    vector<int> dp(n,0);
    
    dp[n-1]=avail[s[n-1]-'a'];
    ll ans=dp[n-1];
    
    for(int i=n-2;i>=0;i--){
        if(avail[s[i]-'a']){
            dp[i]=1;
            dp[i]+=dp[i+1];
        }
        ans+=dp[i];
    }
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