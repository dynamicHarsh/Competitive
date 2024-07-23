#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int maxi=n*m;
    if(maxi==1){
        cout<<"-1"<<endl;
        return;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]%maxi+1<<" ";
        }
        cout<<endl;
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