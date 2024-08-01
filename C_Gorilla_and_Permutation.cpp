#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    int val1=n,val2=1;
    for(int i=0;i<n;i++){
        if(val1>=k){
            a[i]=val1;
            val1--;
        }
        else if(val1>m){
            a[i]=val1;
            val1--;
        }
        else{
            a[i]=val2;
            val2++;
        }
        
    }
    for(auto x: a){
        cout<<x<<" ";
    }
    cout<<endl;
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