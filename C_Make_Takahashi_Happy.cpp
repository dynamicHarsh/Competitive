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

    vector<vector<ll>> grid(n,vector<ll>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }

    function<int(int,int, set<ll>)> dfs=[&](int i,int j, set<ll> st)->int{
        if(i<0 || i>=n || j<0 || j>=m || st.count(grid[i][j])!=0) return 0;
        if(i==n-1 && j==m-1) return 1;
        st.insert(grid[i][j]);
        int right=dfs(i,j+1,st);
        int down=dfs(i+1,j,st);
        return right+down;
    };
    set<ll> st;
    cout<<dfs(0,0,st)<<endl;
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