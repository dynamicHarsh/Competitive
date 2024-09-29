#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"


int f(int ind,vector<int> a){
    int n=a.size();
    vector<bool> vis(n,false);
    while(!vis[ind]){
        vis[ind]=true;
        ind=a[ind];
    } 
    return ind;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]--;
    }
    for(int i=0;i<n;i++){
        cout<<f(i,a)+1<<" ";
    }

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