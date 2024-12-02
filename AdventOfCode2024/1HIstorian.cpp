#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    vector<int> list1,list2;
    ll x,y;
    while(cin>>x>>y){
        list1.push_back(x);
        list2.push_back(y);
    }
    sort(list1.begin(),list1.end());
    sort(list2.begin(),list2.end());
    ll len=list1.size();
    ll ans=0;

    for(int i=0;i<len;i++){
        ans+=abs(list1[i]-list2[i]);
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