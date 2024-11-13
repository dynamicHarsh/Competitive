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
    if(s[1]=='0'){cout<<s.substr(2)<<endl;
    return;}
    int fd=s[0]-'0',sd=-1;
    string ans="";
    for(int i=1;i<s.length();i++){
        
        sd=s[i]-'0';
        if(sd==0) continue;
        else{
            if(sd>fd){
                
                ans=s.substr(0,i)+s.substr(i+1);
            }
            else{
                ans=s.substr(1);
            }
            break;
        }
    }
    if(sd==0 || ans==""){
        ans=s.substr(1);
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