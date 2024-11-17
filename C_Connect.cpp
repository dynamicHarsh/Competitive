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
    int ix,iy,fx,fy;
    cin>>ix>>iy>>fx>>fy;
    --ix,--iy,--fx,--fy;
    vector<string> mat(n);
    for(int i=0;i<n;i++){
        cin>>mat[i];
    }
    int dirx[4]={-1,0,1,0};
    int diry[4]={0,1,0,-1};
    vector<pair<int,int>> init,fin;
    function<void(int,int,int,vector<pair<int,int>>&)> dfs=[&](int x,int y,char col,vector<pair<int,int>> &vp){
        // cout<<x<<y<<endl;
        mat[x][y]=col;
        vp.push_back({x,y});
        for(int i=0;i<4;i++){
            int nx=x+dirx[i];
            int ny=y+diry[i];
            if(nx>=0 && nx<n && ny>=0 && ny<n && mat[nx][ny]=='0' && mat[nx][ny]!=col) {
                dfs(nx,ny,col,vp);
            }
        }
    };

    dfs(ix,iy,'#',init);
    dfs(fx,fy,'$',fin);
    
    int ans=INT_MAX;
    
    for(int i=0;i<init.size();i++){
        int ifirst=init[i].first,isecond=init[i].second;
        for(int j=0;j<fin.size();j++){
        int ffirst=fin[j].first,fsecond=fin[j].second;
        int a=ifirst-ffirst;
        int b=isecond-fsecond;
        int calc=a*a+b*b;
            ans=min(ans,calc);
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