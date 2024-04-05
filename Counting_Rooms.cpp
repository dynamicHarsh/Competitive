#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
string s[1005];
int r,c;
bool valid(int i,int j){
    return (i>=0 && i<r && j>=0 && j<c && s[i][j]=='.');
}

void dfs(int i,int j){
    s[i][j]='#';
    if(valid(i+1,j)){
        dfs(i+1,j);
    }
    if(valid(i,j+1)){
        dfs(i,j+1);
    }
    if(valid(i-1,j)){
        dfs(i-1,j);
    }
    if(valid(i,j-1)){
        dfs(i,j-1);
    }
}

void solve(){
    
    cin>>r>>c;
    
    for(int i=0;i<r;i++){
        cin>>s[i];
    }
    
    int ans=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(valid(i,j)){
                dfs(i,j); ans++;
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