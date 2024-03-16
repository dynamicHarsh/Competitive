#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
int f[200005];
void solve(){
    int n;
    cin>>n;
    int e;
    
    for(int i=0;i<n;i++){
       cin>>e;
       f[e]++;
    }
    if(f[0]==0){
        cout<<"0"<<endl;
        return;
    }
    for(int i=0;i<200005;i++){
        int maxi=i+f[i]-1;
        for(int j=i+1;j<maxi;j++){
            if(f[j])
            int maxi=min(maxi,j+f[j]-1);
        }
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