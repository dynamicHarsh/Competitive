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
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    ll cnt=0,k1=0,prev=0;
    for(int i=0;i<n;i++){
        if(a[i]>prev){
            k1++;
        }
        else{
            k1=1;
        }
        if(k1>k){
            cnt++;
        }
        prev=a[i]/2;
    }
    cout<<cnt<<endl;
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