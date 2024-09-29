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
    int flag=1;
    
    
    for(int i=1;i<n;i++){
        if(s[i]>='a' && s[i]<='z') flag=0;
    }
    if(flag){
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=(char)tolower(s[i]);
            }
            else{
                s[i]=(char)toupper(s[i]);
            }
        }
    }
    cout<<s<<endl;
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