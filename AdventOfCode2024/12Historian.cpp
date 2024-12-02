#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    vector<ll> list1;
    map<ll,ll> freq;

    ll x,y;
    while(cin>>x>>y){
        list1.push_back(x);
        freq[y]++;
    }
    int len=list1.size();
    ll ans=0;
    for(int i=0;i<len;i++){
        ans+=(list1[i]*freq[list1[i]]);
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