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
    bool flag=false;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1' && flag) s[i]='#';
        if(s[i]=='0') flag=true;
    }
    for(int i=0;i<n;i++){
        if(s[i]!='#'){
            cout<<s[i];
        }
    }
    cout<<endl;
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