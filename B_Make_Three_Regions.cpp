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
    string s[2];
    cin>>s[0]>>s[1];
    int ans=0;
    for(int i=0;i+2<n;i++){
        if(s[0][i+1]=='.' && s[1][i+1]=='.'){
            if(s[0][i]=='x' && s[0][i+2]=='x' && s[1][i+1]=='.' && s[1][i]=='.' && s[1][i+2]=='.') ans++;
        else if(s[1][i]=='x' && s[1][i+2]=='x' && s[0][i+1]=='.' && s[0][i]=='.' && s[0][i+2]=='.') ans++;
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