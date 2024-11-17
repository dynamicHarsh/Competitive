#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,b,a;
    cin>>n>>b>>a;
    int ans=0;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    int maxi=a;
    for(int i=0;i<n;i++){
        if(b==0 && a==0) break;
        if(ar[i]==0){
            if(a>0){
                a--;
            }
            else{
                b--;
            }
        }
        else{
            if(a==maxi){
                a--;
            }
            else if(b>0){
                b--;
                a++;
            }
            else{
                a--;
            }
        }
        ans++;
    }
    cout<<ans<<endl;

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