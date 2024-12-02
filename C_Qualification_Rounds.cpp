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
    set<int> st;
    
    for(int i=0;i<n;i++){
        int num=0;
        for(int j=k-1;j>=0;j--){
            int x;cin>>x;
            if(x) num |=(1LL<<j);
        }
        st.insert(num);
    }
    int limit = (1 << k);
    for(auto num1: st){
        for(int num2=0;num2<limit;num2++){
            if((num2&num1)==0 && st.find(num2)!=st.end()){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
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