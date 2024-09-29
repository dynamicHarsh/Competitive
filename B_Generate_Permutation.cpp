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
    if(n%2==0) cout<<"-1"<<endl;
    else{
        vector<int> ans(n);
        int cnt=1;
        for(int i=0;i<n;i+=2){
            ans[i]=cnt;
            cnt++;
        }
        cnt=n;
        for(int i=1;i<n;i+=2){
            ans[i]=cnt;
            cnt--;
        }
        for(auto x: ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
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