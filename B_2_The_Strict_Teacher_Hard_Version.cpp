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
    if(pos<a[0]){
        cout<<a[0]-1<<endl;
    }
    else if(pos>a[m-1]){
        cout<<n-a[m-1]<<endl;
    }
    else{
        int ind=lower_bound(a.begin(),a.end(),pos)-a.begin()-1;
        int mid=(a[ind]+a[ind+1])/2;
        int move=mid-a[ind];
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