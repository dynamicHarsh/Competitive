#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll under=0,hyphen=0;
    for(auto ch: s){
        if(ch=='_'){
            under++;
        }
        else if(ch=='-'){
            hyphen++;
        }
    }
    ll ans=0;
    ll left=hyphen/2;
    ll right=(hyphen+1)/2;
    ans=left*(under*right);
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