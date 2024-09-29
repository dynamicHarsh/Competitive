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
    string t=s;
    int n=s.length();
    for(int i=1;i<n-1;i++){
        if(t[i]==t[i-1] && t[i]==t[i+1]) t[i]='#';
    }
    for(int i=1;i<n;i++){
        if(t[i]==t[i-1]) t[i]='#';
    }
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            char ch1='.',ch2='.';
            for(int j=0;j<26;j++){
                char ch='a'+j;
                if(ch!=ch1 && ch!=ch2){
                    t[i]=ch;
                    break;
                }
            }
        }
    }
    cout<<t<<endl;
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