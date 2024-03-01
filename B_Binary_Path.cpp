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
    cin>>s[0];
    cin>>s[1];
    string ans="";
    
    ans+=s[0][0];
    int k=0;
    for(int i=1;i<n;i++){
        if(k==1){
            ans+=s[k][i-1];
        }
        else{
           if(s[0][i]=='0'){
            ans+='0';
        }
        else if(s[1][i-1]=='0'){
            ans+='0';
            k=1;
        }
        else{
            ans+='1';
        } 
        }
        

    }
    ans+=s[1][n-1];
    int ways=1;
    int ind=0;
    for(int i=n-1;i>=0;i--){
        if(ans[i+1]!=s[1][i]){
            ind=i+1;
            break;
        }
    }
    for(int i=ind;i<n-1;i++){
        if(s[1][i]==s[0][i+1]){
            ways++;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
    cout<<ways<<endl;
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