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
    vector<vector<ll>> a(3,vector<ll>(n+1,0));
    
    for(int i=0;i<3;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            a[i][j]+=a[i][j-1];
        }
    }

    vector<int> perm={0,1,2};
    bool flag=false;
    ll lim=(a[0][n]+2)/3;
    for(int i=0;i<6;i++){
        flag=false;
        int cur=1;
        while(cur<=n && a[perm[0]][cur]<lim){
            cur++;
        }

        for(int j=cur+1;j<n;j++){
            if(a[perm[1]][j]-a[perm[1]][cur]>=lim && a[perm[2]][n]-a[perm[2]][j]>=lim){

                vector<pair<int,int>> ans(3);
                ans[perm[0]]={1,cur};
                ans[perm[1]]={cur+1,j};
                ans[perm[2]]={j+1,n};
                for(auto x: ans){
                    cout<<x.first<<" "<<x.second<<" ";
                }
                cout<<endl;
                flag=true;
                break;



            }
        }
        if(flag) break;
        next_permutation(perm.begin(),perm.end());
    }
    if(!flag) cout<<"-1"<<endl;

    
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