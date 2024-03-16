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
    string s[2];
    cin>>s[0]>>s[1];
    vector<vector<bool>> vis(2,vector<bool> (n,0));
    vis[0][0]=1;
    
    queue<pair<int,int>> q;
    q.push({0,0});
    while(!q.empty()){
        auto e=q.front();
        int x=e.first;
        int y=e.second;
        q.pop();
        if(x-1>=0){
            if(s[x-1][y]=='>' && !vis[x-1][y+1]){
                vis[x-1][y+1]=1;
                q.push({x-1,y+1});
            }
            if(s[x-1][y]=='<' && !vis[x-1][y-1]){
                vis[x-1][y-1]=1;
                q.push({x-1,y-1});
            }
        }
        if(x+1<=1){
            if(s[x+1][y]=='>' && !vis[x+1][y+1]){
                vis[x+1][y+1]=1;
                q.push({x+1,y+1});
            }
            if(s[x+1][y]=='<' && !vis[x+1][y-1]){
                vis[x+1][y-1]=1;
                q.push({x+1,y-1});
            }
        }
        if(y+1<n){
            if(s[x][y+1]=='>' && !vis[x][y+2]){
                vis[x][y+2]=1;
                q.push({x,y+2});
            }
        }
        if(y-1>=0){
            if(s[x][y-1]=='<' && !vis[x][y-2]){
                vis[x][y-2]=1;
                q.push({x,y-2});
            }
        }
        
    }
    
    if(vis[1][n-1]){cout<<"YES\n";}
    else{cout<<"NO\n";}
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