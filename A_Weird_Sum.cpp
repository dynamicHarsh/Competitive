#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,m;
    cin>>n>>m;
    int el;
    map<int,vector<int>> x;
    map<int,vector<int>> y;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>el;
            x[el].push_back(i);
            y[el].push_back(j);
        }
    }

    auto f=[&](auto a)->ll{
        ll ans=0;
        for(auto [e,v]: a){
            sort(v.begin(),v.end());
            ll c=0,s=0;
            for(auto i: v){
                ans+=c*i-s;
                c++;
                s+=i;
            }
        }
        return ans;
    };

    cout<<f(x)+f(y)<<endl;
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