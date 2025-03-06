#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    ll k;
    cin>>k;

    ll total=0,cur=0,x=0,y=0;
    vector<pair<int,int>> vp;
    while(total<k){
        if(total+cur>k){
            y++;
            cur=0;
        }
        vp.pb({x,y});
        total+=cur;
        cur++;
        x++;
    }
    cout<<vp.size()<<endl;
    for(auto x: vp){
        cout<<x.first<<" "<<x.second<<endl;
    }
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