#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int64_t n;
    cin>>n;
    int64_t a[n];
    int64_t x=0;
    for(int64_t i=0;i<n;i++){cin>>a[i]; x^=a[i];}
    int64_t pre=0;
    for(int64_t i=0;i<n;i++){
        pre=0;
        for(int64_t j=0;j<=i;j++){
            pre^=a[j];
        }
        if(pre==(x^pre)){
            cout<<"YES"<<endl;
            // cout<<pre<<" "<<x<<endl;
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