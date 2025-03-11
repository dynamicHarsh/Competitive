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
    vector<ll> a(2*n);
    for(int i=0;i<2*n;i++) cin>>a[i];

    sort(a.begin(),a.end());
    ll sum=0;
    vector<ll> ans;
    for(int i=1;i<n;i++){
        ans.push_back(a[i]);
        ans.push_back(a[i+n-1]);
        sum+=(a[i+n-1]-a[i]);
    }
    ans.push_back(sum+a[2*n-1]+a[0]);
    ans.push_back(a[0]);
    cout<<a[2*n-1];
    for(auto x: ans){
        cout<<" "<<x;
    }
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