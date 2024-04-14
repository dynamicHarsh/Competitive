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
    }
    vector<int> ans;
    ans.push_back(a[0]);
    for(int i=1;i<n;i++){
        if(a[i]>ans.back()){
            ans.push_back(a[i]);
        }
        else{
            int ind=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
            ans[ind]=a[i];
        }
    }
    cout<<ans.size()<<endl;
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