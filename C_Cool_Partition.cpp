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
    for(int i=0;i<n;i++) cin>>a[i];
    unordered_set<int> st1,st2;

    int ans=1;
    int prev=1,seen=0;
    st1.insert(a[0]);
    for(int i=1;i<n;i++){
        if(st1.find(a[i])!=st1.end() && st2.find(a[i])==st2.end()){
            seen++;
            st2.insert(a[i]);
            if(seen==prev){
                prev=st2.size();
                seen=0;
                ans++;
                st1=st2;
                st2.clear();
            }
        }
        else{
            st2.insert(a[i]);
        }
    }
    cout<<ans<<endl;
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