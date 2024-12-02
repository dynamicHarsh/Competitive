#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    vector<int> ms(m),me(m);
    int ind=0;
    for(int i=0;i<m;i++){
        while(s[ind]!=t[i]) ind++;
        ms[i]=ind+1;
        ind++;
    }
    ind=n-1;
    for(int i=m-1;i>=0;i--){
        while(s[ind]!=t[i]) ind--;
        me[i]=ind+1;
        ind--;
    }
    int ans=0;
    for(int i=0;i<m-1;i++){
        ans=max(ans,me[i+1]-ms[i]);
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}