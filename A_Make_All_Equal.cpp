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
    vector<int> f(101,0);
    int e;
    for(int i=0;i<n;i++){
        cin>>e;
        f[e]++;
    }
    int maxi=INT_MIN;
    int mini=-1;
    for(int i=0;i<101;i++){
        if(mini=-1 && f[i]!=0){
            mini=f[i];
        }
        if(f[i]>maxi) maxi=f[i];
    }
    cout<<min(n-maxi,n-mini)<<endl;
    
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