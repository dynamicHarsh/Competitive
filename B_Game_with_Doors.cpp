#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"



void solve(){
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    vector<int> vis(102,0);
    for(int i=l1;i<=r1;i++){
        vis[i]++;
    }
    for(int i=l2;i<=r2;i++){
        vis[i]++;
    }
    int ans=1;
    int two=0;
    int left=0;
    int right=0;
    for(int i=0;i<=101;i++){
        if(vis[i]==1 && vis[i+1]==2){
            left=1;
        }
        if(vis[i]==2 && vis[i+1]==1){
            right=1;
        }
        if(vis[i]==2) two++;
        
    }
    ans=max(1,left+right+two-1);
    cout<<ans<<endl;
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