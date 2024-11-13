#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9+7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int u, v;
    vector<int> adj[n];
    for (int i = 0; i < n - 1; i++) {
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans=0;
    function<void(int,int,int)> dfs=[&](int v,int p,int c){
        if(c>m) return;

        bool isLeaf=1;
        for(auto child: adj[v]){
            if(child==p) continue;
            isLeaf=0;
            dfs(child,v,a[child]?c+1:0);
        }
        ans+=isLeaf;
    };
    int cat=a[0];
    dfs(0,-1,cat);
    cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
