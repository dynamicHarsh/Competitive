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
    vector<int> a(n);
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        // cout<<s<<endl;
        a[i]=s.length();
    }
    int cur=0,ans=0;
    
    for(int i=0;i<n;i++){
        if(cur+a[i]<=m){
            cur+=a[i];
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
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