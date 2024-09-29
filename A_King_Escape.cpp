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
    int kx,ky,qx,qy,gx,gy;
    cin>>qx>>qy>>kx>>ky>>gx>>gy;
    kx--,ky--,qx--,qy--,gx--,gy--;
    // cout<<kx<<ky<<qx<<qy<<gx<<gy<<endl;
    vector<vector<bool>> board(n,vector<bool> (n,false));
    for(int i=0;i<n;i++){
        board[qx][i]=true;
        board[i][qy]=true;
    }
    int sum=qx+qy,diff=qy-qx;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==sum || j-i==diff) board[i][j]=true;
        }
    }
    vector<vector<bool>> vis(n,vector<bool>(n,false));
    int dirx[]={-1,0,1,0,-1,1,-1,1};
    int diry[]={0,1,0,-1,1,1,-1,-1};
    
    function<bool(int,int)> f=[&](int x,int y)->bool{
        if(x==gx && y==gy) return true;
        if(x<0 || x>=n || y<0 || y>=n || board[x][y] || vis[x][y]) return false;
        vis[x][y]=true;
        
        int nx,ny;
        for(int i=0;i<8;i++){
            nx=x+dirx[i];
            ny=y+diry[i];
            if(f(nx,ny)) return true;
        }

        return false;

    };
    if(f(kx,ky)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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