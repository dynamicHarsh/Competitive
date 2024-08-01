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
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int ar=0,br=0,pos=0,neg=0;
    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            if(a[i]==1) pos++;
            if(a[i]==-1) neg++;
        }
        else if(a[i]>b[i]){
            ar+=a[i];
        }
        else{
            br+=b[i];
        }
    }
    int ans=0;
    while(pos--){
        if(ar<br) ar++;
        else br++;
    }
    while(neg--){
        if(ar>br) ar--;
        else br--;
    }
    cout<<min(ar,br)<<endl;
    
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