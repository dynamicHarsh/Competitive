#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

set<ll> lst;

void solve() {
    ll n;
    cin>>n;
    if(n==1 || lst.find((n*(n+1))/2)!=lst.end()) cout<<"-1"<<endl;
    else{
        vector<long long > ans;
        for(ll i=1;i<=n;i++){
            if(lst.find(i*(i+1)/2)!=lst.end()){
                ans.push_back(i+1);
                ans.push_back(i);
                i++;
            }
            else{
                ans.push_back(i);
            }
        }
        for(auto x: ans){
            cout<<x<<" ";
        }
        cout<<endl;

       
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(ll i=1;i<=5e5;i++){
        lst.insert(i*i);
    }
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}