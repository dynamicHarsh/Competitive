#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> ans(n,n);

    if(k%2==0){
        for(int i=0;i<n;i++){
            ans[i]=n-1;
        }
        ans[n-2]=n;
    }
    else{
        ans[n-1]=n-1;
    }

    for(auto x: ans) cout<<x<<" ";
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