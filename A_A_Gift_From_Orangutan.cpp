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
    int e;
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>e;
        if(e<mini) mini=e;
        if(e>maxi) maxi=e;
    }
    cout<<(n-1)*(maxi-mini)<<endl;

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