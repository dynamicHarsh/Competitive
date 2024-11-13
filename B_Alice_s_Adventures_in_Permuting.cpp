#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ull n,b,c;
    cin>>n>>b>>c;
    if(b==0){
        if(c>=n){cout<<n<<endl;}

        else if(c==n-1){
            cout<<n-1<<endl;
        }
        else if(c==n-2){
            cout<<n-1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
         if(c>=n) cout<<n<<endl;
        else cout<<n-(((n-c-1)/b)+1LL)<<endl;
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