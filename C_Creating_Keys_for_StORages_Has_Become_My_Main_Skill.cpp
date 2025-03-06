#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll> ans;
    ll cur=0;
    for(ll i=0;i<n-1;i++){
        if((i&k)==i){
            ans.pb(i);
            cur|=i;
        }
        else{
            ans.pb(0);
        }
    }
    if((cur|(n-1))==k){
        ans.pb(n-1);
    }
    else{
        ans.pb(k);
    }
    // cout<<"cur"<<cur<<endl;

    for(auto x: ans){
        cout<<x<<" ";
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