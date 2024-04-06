#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
int dp[100005]; //dp[x]->no of way to form x from the given coins
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=100005;j;j--){
            if(j>=a[i]){
                dp[j]+=dp[j-a[i]];
            }
        }
    }
    vector<int> ans;
    for(int i=1;i<100005;i++){
        if(dp[i]){
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<endl;
    for(auto a: ans){
        cout<<a<<" ";
    }
    cout<<endl;


}
 
int main(){
    ios::sync_with_stdio(false);
      cin.tie(0);
 
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
    return 0;
}