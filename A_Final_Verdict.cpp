#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    int n,x;
    cin>>n>>x;
    int sum=0;
    int e;
    for(int i=0;i<n;i++){
        cin>>e;
        sum+=e;
    }
    if(sum%n==0 && sum/n==x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


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