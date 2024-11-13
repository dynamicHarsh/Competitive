#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,r,q,e;
    cin>>n>>r>>q;
    vector<vector<int>> vi(r,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<r;j++){
            cin>>e;
            vi[j][i]=e;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=1;j<n;j++){
            vi[i][j] =vi[i][j] | vi[i][j-1];
        }
    }
    while(q--){
        int m;
        cin>>m;
        int left=0,right=n;
        char op;
        int region, val;
        while(m--){
            cin>>region>>op>>val;

    --region;
            if(op=='<'){
                right=min(right,int(lower_bound(vi[region].begin(),vi[region].end(),val)-vi[region].begin()));
            }
            else{
                left=max(left,int(upper_bound(vi[region].begin(),vi[region].end(),val)-vi[region].begin()));
            }
        }
        cout<<(left>=right?-1:left+1)<<endl;
        
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