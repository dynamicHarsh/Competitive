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
    string grid[n];
    for(int i=0;i<n;i++) cin>>grid[i];

    int dirx[]={-1,0,1,0};
    int diry[]={0,1,0,-1};

    function<void(int,int)> dfs=[&](int i, int j){
        grid[i][j]='#';

        for(int ind=0;ind<4;ind++){
            int x=i+dirx[ind];
            int y=j+diry[ind];
            if(x>=0 && x<n && y>=0 && y<m && grid[x][y]=='.') dfs(x,y);
        }

    };
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]=='.'){
                dfs(i,j);
                ans++;
            }
        }
    }
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