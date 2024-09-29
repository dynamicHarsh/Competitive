#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll m,n;
    cin>>m>>n;
    string grid[m];
    for(int i=0;i<m;i++){
        cin>>grid[i];
    }
    int ai=0,aj=0;
   function<void(int, int)> dfs = [&](int i, int j) {
        if (i < 0 || i >= m || j < 0 || j >= n) {
            cout << ai + 1 << " " << aj + 1 << endl;
            exit(0);
        }
        if (grid[i][j] == 'Q') {
            cout << -1 << endl;
            exit(0);
        }
        ai = i, aj = j;
        char orig = grid[i][j];
        grid[i][j] = 'Q';  
        if (orig == 'R') {
            dfs(i, j + 1);
        } else if (orig == 'D') {
            dfs(i + 1, j);
        } else if (orig == 'L') {
            dfs(i, j - 1);
        } else {  
            dfs(i - 1, j);
        }
    };

    
    dfs(0, 0);
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