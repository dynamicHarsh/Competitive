#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    int b[m];
    
    unordered_set<int> as;
    unordered_set<int> bs;
    vector<bool> vis(k+1,false);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=k){
            as.insert(a[i]);
        }
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        if(b[i]<=k){
            bs.insert(b[i]);
        }
    }
    if(as.size()<k/2 || bs.size()<k/2){
        cout<<"NO"<<endl;
        return;
    }
    for(auto x: as){
        vis[x]=true;
    }
    for(auto y: bs){
        vis[y]=true;
    }
    for(int i=1;i<=k;i++){
        if(!vis[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

        
    
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