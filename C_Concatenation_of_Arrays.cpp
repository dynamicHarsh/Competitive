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
    vector<vector<int>> a(n,vector<int>(4,0));
    for(int i=0;i<n;i++){
        cin>>a[i][2]>>a[i][3];
        a[i][0]=a[i][2]+a[i][3];
        a[i][1]=min(a[i][2],a[i][3]);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i][2]<<" "<<a[i][3]<<" ";
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