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
    set<int> ans;

    for(int i=2;i<=n;i++){
        bool flag=true;

        for(int j=2;j*j<i;j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag){
            int temp=i;
            while(temp<=n){
                ans.insert(temp);
                temp*=i;
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto x: ans){cout<<x<<" ";}
    cout<<endl;
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