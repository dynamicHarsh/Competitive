#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> ans(n+1,0);
    for(int i=y;i<=x;i++){
        ans[i]=1;
    }
    int el=1;
    for(int i=y-1;i>=0;i--){
        if(el==-1){
            el=1;
        }
        else{
            el=-1;
        }
        ans[i]=el;
    }
    el=1;
    for(int i=x+1;i<=n;i++){
        if(el==-1){
            el=1;
        }
        else{
            el=-1;
        }
        ans[i]=el;
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
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