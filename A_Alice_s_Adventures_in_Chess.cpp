#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int x=0,y=0;
    int tt=1000;
    bool flag=false;
    while(tt--){
        for(int i=0;i<n;i++){
        if(s[i]=='W') x--;
        else if(s[i]=='N') y++;
        else if(s[i]=='E') x++;
        else y--;
        if(x==a && y==b){flag=true;
        break;}
    }
    if(flag) break;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
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