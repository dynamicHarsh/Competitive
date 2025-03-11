#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    int n;
    cin>>n;
    vector<ll> b(n);
    int root=-1;
    for(int i=0;i<n;i++){
        cin>>b[i];
        b[i]--;
        if(b[i]==i) root=i;
    }
    vector<ll> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
        p[i]--;
    }
    vector<ll> ans(n,-1);
    long long cur=1;
    if(root==p[0]) ans[root]=0;
    else{cout<<"-1"<<endl; return;}
    for(int i=1;i<n;i++){
        ll next=p[i];
        ll parent=b[next];
        if(ans[parent]==-1){
            cout<<"-1"<<endl;
            return;
        }
        // for(auto x: ans){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        ans[next]=ans[p[i]]+1;
        // cout<<"cur"<<cur<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]-ans[b[i]]<<" ";
    }
    cout<<endl;
    // cout<<"EOT"<<endl;
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