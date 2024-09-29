#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int a,b;
    cin>>a>>b;
    b=b%2;
    if((b>0 && a>0 && a%2==0) || (a%2==0 && b==0)) cout<<"YES"<<endl;
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