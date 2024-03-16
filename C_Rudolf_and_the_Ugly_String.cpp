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
    // int m=0,a=0,p=0,ii=0,e=0;
    // int ind=0;

    int ans=0;
    for(int i=0;i<n-2;i++){
        if(i+4<n && s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e'){
            ans++;
            i+=4;
        }
        else if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p'){
            ans++;
            i+=2;
        }
        else if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'){
            ans++;
            i+=2;
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