#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,m,q;
    cin>>n>>m>>q;
    vector<int> a(m,0);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    while(q--){
    int pos;
    cin>>pos;
    auto itr=lower_bound(a.begin(),a.end(),pos);
    if(itr==a.begin()){
        cout<<a[0]-1<<endl;
    }
    else if(itr==a.end()){
        cout<<n-a[1]<<endl;
    }
    else{
        int ind=itr-a.begin();
        int mid=(a[1]+a[0])/2;
        int move=mid-a[0];
        cout<<move<<endl;
    }
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