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
    if(s[0]=='1' || s[n-1]=='1'){cout<<"YES"<<endl;return;}
    for(int i=1;i<n;i++){
        if(s[i]=='1' && s[i-1]=='1'){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

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