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
    int e;
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>e;
        m[e]++;
    }
    vector<int> a;
    for(auto x: m){
        if(x.second==1){
            a.push_back(x.first);
        }
    }
    sort(a.begin(),a.end());
    if(a.size()>=2){
        m[a[1]]=0;
    }
    int mex=0;
    while(m[mex]>0){
        mex++;
    }
    cout<<mex<<endl;
   

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