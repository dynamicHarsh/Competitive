#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

const int maxN=200005;
int n;
int a[maxN];
bool f[maxN];

void func(){
    for(int i=1;i<=n;i++){
        f[i]=false;
    }
    int maxi=0;
    for(int i=0;i<n;i++){
        if(f[a[i]]){
            maxi=max(maxi,a[i]);
        }
        f[a[i]]=true;
        a[i]=maxi;
        
        
    }
}


void solve(){
    
    cin>>n;
    
    for(int i=0;i<n;i++){cin>>a[i];}
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    func();
    
   for(int i=0;i<n;i++){
        sum+=a[i];
    }
    func();
    for(int i=0;i<n;i++){
        sum+=(n-i)*1LL*a[i];
    }
    cout<<sum<<endl;

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