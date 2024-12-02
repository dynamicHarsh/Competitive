#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"
const ll N=100005;
ll dp[N];
ll cnt[N];
void solve() {
    int n;
    cin>>n;
    memset(cnt,0, sizeof(cnt));
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        cnt[x]++;
    }
    

    for(ll i=1;i<=N;i++){
        dp[i]=max(dp[i-1],dp[i-2]+cnt[i]*i);
    }
    cout<<dp[N]<<endl;

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