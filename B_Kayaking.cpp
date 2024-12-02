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
    n=2*n;
    vector<int> a(n);
    for(auto &x: a) cin>>x;
    
    
    sort(a.begin(),a.end());
    ll ans=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            vector<int> temp;
            for(int k=0;k<n;k++){
                if(k==i || k==j) continue;
                temp.pb(a[k]);
                // cout<<a[k]<<" ";
            }
            ll sum=0;
            // cout<<a[i]<<" "<<a[j]<<endl;
            for(int k=1;k<n-2;k+=2){
                
                sum+=(temp[k]-temp[k-1]);
                // cout<<sum<<" ";
            }
            // cout<<endl;
            ans=min(ans,sum);
        }
    }
    cout<<ans<<endl;
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