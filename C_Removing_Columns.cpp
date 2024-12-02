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
    vector<string> s;
    string x;
    for(int i=0;i<n;i++){
        cin>>x;
        s.pb(x);
    }
    int ans=0;
    vector<bool> good(m,false);
    for(int j=0;j<m;j++){
        bool remove=false;
        for(int i=0;i<n;i++){
            if(i+1<n && s[i][j]>s[i+1][j] && !good[i]){
                remove=true;
                break;
            }
        }
        ans+=remove;

        if(!remove){
            for(int i=0;i<n;i++){
                if(i+1<n && s[i][j]<s[i+1][j]) good[i]=true;
            }
        }
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