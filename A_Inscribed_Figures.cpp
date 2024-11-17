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
        a[i]--;
    }

    int p[3][3]={{-1,3,4},{3,-1,-1},{4,-1,-1}};
    
    int ans=0;
    
    for(int i=0;i<n-1;i++){
        if(p[a[i]][a[i+1]]==-1){
            cout<<"Infinite"<<endl;
            return;
        }
        ans+=p[a[i]][a[i+1]];

    }
    for(int i=0;i<=n-3;i++){
        if(a[i]==2 && a[i+1]==0 && a[i+2]==1) ans--;
    }
    cout<<"Finite"<<endl;
    cout<<ans<<endl;
}
 
int main(){
    ios::sync_with_stdio(false);
      cin.tie(0);
 
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
    return 0;
}