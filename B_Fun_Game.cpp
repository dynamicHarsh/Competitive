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
    string s,t;
    cin>>s>>t;
    if(s==t){
        cout<<"YES"<<endl;
        return;
    }

    if(s[0]=='0' && t[0]=='1'){cout<<"NO"<<endl;}
    else{
        int ks=0,kt=0;
        for(char c: s){
            if(c=='0'){
                ks++;
            }
            else{
                break;
            }
        }
        for(char c: t){
            if(c=='0'){
                kt++;
            }
            else{
                break;
            }
        }
        
        cout<<((ks>kt)?"NO":"YES")<<endl;
    }
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