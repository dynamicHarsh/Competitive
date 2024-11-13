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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[m];
    for(int i=0;i<m;i++) cin>>b[i];
    bool flag=true;
    int ind=0;
    vector<bool> seen(n+1,false);
    for(int i=0;i<n;i++){
        if(ind==m) break;
        if(b[ind]!=a[i] && !seen[a[i]]){
            flag=false;
            break;
        }
        while(a[i]==b[ind]){
            ind++;
        }
    }
    if(flag) cout<<"YA"<<endl;
    else cout<<"TIDAK"<<endl;
    
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