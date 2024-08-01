#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<int> st;
    st.push(0);
    int ans=0;
    for (int i = 1; i < n; i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            if (!st.empty()) {
                int ind = st.top();
                st.pop();
                ans += (i - ind);
            } else {
                if (s[i] == '_') {
                    st.push(i);
                }
            }
        }
    }
    cout<<ans<<endl;
}
 
int main(){
    ios::sync_with_stdio(false);
      cin.tie(0);
 
    int t=1;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}