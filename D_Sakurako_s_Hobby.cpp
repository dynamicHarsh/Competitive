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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        --a[i];
    }
    string s;
    cin>>s;
    set<int> st;
    vector<int> ans(n,-1);
    for(int i=0;i<n;i++){
        if(ans[i]==-1){
            st.clear();
        int j=i,cnt=0;
        while(st.insert(j).second){
            if(s[j]=='0') cnt++;
            j=a[j];
        }
        for(auto x: st){
            // cout<<x<<" ";
            ans[x]=cnt;
        }
        // cout<<endl;
        }
    }
    for(auto x: ans){
        cout<<x<<" ";
    }
    cout<<endl;

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