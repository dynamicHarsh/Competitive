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
    cin>>m>>n;
    vector<vector<int>> a(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){cin>>a[i][j];}
    }
    int dirx[]={1,0,-1,0};
    int diry[]={0,-1,0,1};
    vector<vector<bool>> vis(m,vector<bool> (n,false));
    
    function<ll(int,int)> f=[&](int x,int y)->ll{
        if(x<0 || x>=m || y<0 || y>=n || a[x][y]==0 || vis[x][y]) return 0;
        int nx,ny;
        vis[x][y]=true;
        int ans=a[x][y];
        for(int i=0;i<4;i++){
            nx=x+dirx[i],ny=y+diry[i];
            ans=ans+f(nx,ny);
        }
        return ans;
    };
    ll maxi=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=0 && !vis[i][j]){
                maxi=max(maxi,f(i,j));
            }
        }
    }
    cout<<maxi<<endl;

    
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