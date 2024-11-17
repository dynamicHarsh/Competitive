#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int a,b,k;
    cin>>a>>b>>k;
    vector<int> boys(a+1,0),girls(b+1,0);
    map<pair<int,int>,int> m;
    int pa[k],pb[k];
    for(int i=0;i<k;i++){
        cin>>pa[i];
        boys[pa[i]]++;
    }
    for(int i=0;i<k;i++){
        cin>>pb[i];
        girls[pb[i]]++;
        m[{pa[i],pb[i]}]++;
    }

    ll ans=0;
    for(int i=0;i<k;i++){
        ll calc=(k-boys[pa[i]]-girls[pb[i]]+m[{pa[i],pb[i]}]);
        if(calc>0) ans+=calc;
    }
    cout<<ans/2<<endl;

    

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