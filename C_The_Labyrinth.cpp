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
    string mat[n];
    for(int i=0;i<n;i++) cin>>mat[i];

    vector<vector<int>> a(n,vector<int>(m,-1));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]=='.') a[i][j]=0;
        }
    }
        
    int dirx[]={-1,0,1,0};
    int diry[]={0,1,0,-1};
    auto dfs=[&](int x,int y,int c,auto&& dfs){
        if(x<0 || x>=n || y<0 || y>=m || a[x][y]!=0) return;
        a[x][y]=c;
        for(int i=0;i<4;i++){
            int nx=x+dirx[i];
            int ny=y+diry[i];
                dfs(nx,ny,c,dfs);
        }
    };
    

    
   int color=1;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<m;j++){
            
            if(mat[i][j]=='.'){
                dfs(i,j,color,dfs);
                color++;
            }
        }
    }

    map<int,int> freq;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>0) freq[a[i][j]]++;
        }
    }
    
    for(int i=0;i<n;i++){
        string s="";
        for(int j=0;j<m;j++){
            if(mat[i][j]=='.') s+='.';
            else{
                int comp=1;
                map<int,int> smap;
                for(int d=0;d<4;d++){
                    int x=i+dirx[d];
                    int y=j+diry[d];
                    if(x>=0 && x<n && y>=0 && y<m){
                        smap[a[x][y]]=freq[a[x][y]];
                    }
                }
                for(auto [first,second]: smap){
                    comp+=second;
                }
                comp=comp%10;
                s+=to_string(comp);
            }
        }
        
        cout<<s<<endl;
    }
    

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