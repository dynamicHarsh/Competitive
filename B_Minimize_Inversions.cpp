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
    pair<int,int> vp[n];
    for(int i=0;i<n;i++){cin>>vp[i].first;}
    for(int i=0;i<n;i++){cin>>vp[i].second;}
    sort(vp,vp+n);
    for(int i=0;i<n;i++){
        cout<<vp[i].first<<" \n"[i==n-1];
    }
    for(int i=0;i<n;i++){
        cout<<vp[i].second<<" \n"[i==n-1];
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