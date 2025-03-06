#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    int n,st,en,u,v;
    cin>>n>>st>>en;
    vector<int> adj[n];
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        u--,v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> ans;
    function<void(int, int)> dfs = [&](int u, int parent) {
        for (int v : adj[u]) {
            if (v != parent) {
                dfs(v, u);
            }
        }
        ans.push_back(u+1); 
    };

    dfs(--en,-1);
    for(auto x: ans) cout<<x<<" ";
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}