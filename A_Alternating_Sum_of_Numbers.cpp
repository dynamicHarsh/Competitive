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
    ll x,even=0,odd=0;

    for(int i=0;i<n;i++){
        cin>>x;
        if(i%2==0){
            even+=x;
        }
        else{
            odd+=x;
        }
    }
    cout<<even-odd<<endl;
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