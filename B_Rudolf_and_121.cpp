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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool possible=1;
    for(int i=0;i<n-2;i++){
        if(a[i]==0) continue;
        int req=a[i];
        a[i]-=req;
        a[i+1]-=2*req;
        a[i+2]-=req;
        if(a[i]>0 || a[i+1]<0 || a[i+2]<0){
            possible=0;
            break;
        }
    }
    for(auto x: a){
        if(x!=0){
            possible=0;
            break;
        }
    }
    
    if(possible){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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