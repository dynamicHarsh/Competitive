#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,m;
    cin>>n>>m;
    int a[n];
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi=max(a[i],maxi);
    }
    char ch;
    int l,r;
    vector<int> ans(m,0);
    for(int i=0;i<m;i++){
        cin>>ch>>l>>r;
        
        if(maxi>=l && maxi<=r){
            if(ch=='+') maxi++;
            else maxi--;
        }
        ans[i]=maxi;
    }
    for(auto x: ans){cout<<x<<" ";}
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