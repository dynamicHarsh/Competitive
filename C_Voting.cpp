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
    queue<int> r,d;
    for(int i=0;i<n;i++){
        if(s[i]=='R') r.push(i);
        else d.push(i);
    }

    while(!r.empty() && !d.empty()){
        int r1=r.front();
        int d1=d.front();
        if(r1<d1){
            r.push(r1+n);
        }
        else{
            d.push(d1+n);
        }
        r.pop();
        d.pop();
    }
    if(r.empty()) cout<<"D"<<endl;
    else cout<<"R"<<endl;
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