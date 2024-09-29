#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int m,n;
    cin>>n>>m;
    vector<int> deg(n);
    int u,v;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        u--,v--;
        deg[u]++;
        deg[v]++;
    }
    int xy=count(deg.begin(),deg.end(),1);
    int x=n-xy-1;
    int y=xy/x;
    cout<<x<<" "<<y<<endl;
    


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