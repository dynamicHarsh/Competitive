#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    int n,k,p;
    cin>>n>>k>>p;
    if(k>n*p || k<((-1)*(n*p))){
        cout<<"-1"<<endl;
    }
    else{
        if(k<0){
            k*=-1;
        }
        int ans=k/p;
        ans+=(k%p)?1:0;
        cout<<ans<<endl;
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