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
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int k=-1;
    
    if(a[0]==a[1]){
       for(int i=n-1;i>0;i--){
        if(a[i]%a[0]!=0 ){
            k=i;
           break;
        }
    } 
    if(k==-1){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
    
    else{
        cout<<"YES"<<endl;
    }
    // ll r;
    // for(int i=1;i<n;i++){
    //     r=a[i-1]%a[i];
    //     a[i]=r;
    // }
    // if(r==0){
       
    //     cout<<"NO"<<endl;
    // }
    // else{
    //     cout<<"YES"<<endl;
    // }
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