#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,exp;
    cin>>n>>exp;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> mp;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[a[i]]=x;
    }
    int ans=0;
    for(auto it: mp){
        int e=it.first;
        int b=it.second;
        if(exp>=e){
            exp+=b;
            ans++;
        }
        else{
            break;
        }
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