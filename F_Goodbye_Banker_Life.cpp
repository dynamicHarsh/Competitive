#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

int maxn=2e6;
vector<ll> pre(maxn);

void solve() {
    int n,k;
    cin>>n>>k;
    cout<<k;
    for(int i=1;i<n;i++){

        ll calc=pre[n-1]-pre[n-i-1]-pre[i];
        if(calc) cout<<" 0";
        else cout<<" "<<k;
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i=1;i<maxn;i++){
        ll j=i,cur=0;
        while(j%2==0){
            cur++;
            j/=2;
        }
        pre[i]=pre[i-1]+cur;
    }
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}