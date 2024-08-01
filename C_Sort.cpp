#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,q;
    cin>>n>>q;
    string a,b;
    cin>>a>>b;
    vector<vector<int>> aa(n+1,vector<int>(26,0));
    vector<vector<int>> bb(n+1,vector<int>(26,0));
    vector<int> prea(26,0);
    vector<int> preb(26,0);
    for(int i=1;i<=n;i++){
        aa[i][a[i-1]-'a']++;
        bb[i][b[i-1]-'a']++;
    }
    for(int j=0;j<26;j++){
        for(int i=1;i<=n;i++){
        aa[i][j]+=aa[i-1][j];
        bb[i][j]+=bb[i-1][j];
    }
    }
    
    while(q--){
        int l,r;
        cin>>l>>r;
        
        int ans=0;
        for(int i=0;i<26;i++){
            int na=aa[r][i]-aa[l-1][i];
            int nb=bb[r][i]-bb[l-1][i];
            if(nb-na>0){
                ans+=(nb-na);
            }
        }
        cout<<ans<<endl;
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