#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> maxi(n),mini(n);
    set<int> mi;
    set<int,greater<>> mx;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mi.insert(i+1);
        mx.insert(i+1);
    }
    maxi[0]=mini[0]=a[0];
    mi.erase(a[0]);
    mx.erase(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            mini[i]=a[i];
            maxi[i]=a[i];
            mi.erase(a[i]);
            mx.erase(a[i]);
        }
        else{
            int maxVal=*(mx.upper_bound(a[i])--);
            maxi[i]=maxVal;
            mx.erase(maxVal);
            mini[i]=*mi.begin();
            mi.erase(mi.begin());
        }
    }
    for(auto x: mini) cout<<x<<" ";
    cout<<endl;
    for(auto x: maxi) cout<<x<<" ";
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