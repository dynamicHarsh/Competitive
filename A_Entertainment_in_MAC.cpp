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
    string r=s;
    reverse(r.begin(),r.end());
    if(r==s){
        cout<<r<<endl;
    }
    else if(s.compare(r)<0){
        if(n&1){
            cout<<s<<r<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    else{
        if(n&1){
            cout<<r<<endl;
        }
        else{
            cout<<r<<s<<endl;
        }
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