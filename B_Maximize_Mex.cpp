#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,x;
    cin>>n>>x;
    map<int,int> mp;
    int e;
    for(int i=0;i<n;i++){
        cin>>e;
        mp[e]++;
    }
    int i;
    for(i=0;i<n;i++){
        if(mp[i]==0) break;
        else{
            mp[i+x]+=mp[i]-1;
        }
    }
    cout<<i<<endl;
    
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