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
    int ans=1;
    map<string,int> m;
    string who,reposted,whom;
    m["polycarp"]=1;
    for(int i=0;i<n;i++){
        cin>>who>>reposted>>whom;
        transform(who.begin(),who.end(),who.begin(),::tolower);
        transform(whom.begin(),whom.end(),whom.begin(),::tolower);
        m[who]=1+m[whom];
        // cout<<who<<" "<<whom<<m[who]<<" "<<m[whom]<<endl;

        ans=max(ans,m[who]);
    }
    cout<<ans<<endl;
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