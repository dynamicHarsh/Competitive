#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,k;
    cin>>n>>k;
    int ans=0;
    if(k==0){
        cout<<"0"<<endl;
        return;
    }
    k-=n;
    ans++;
    int sub=n-1;
    while(k>0){
        k-=sub;
        ans++;
        if(k>0){
            k-=sub;
            ans++;
        }
        else{
            break;
        }
        sub--;
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