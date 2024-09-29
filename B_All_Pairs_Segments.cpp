#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int64_t n,q;
    cin>>n>>q;
    map<int64_t,int64_t> mp;
    int64_t a[n];
    for(int64_t i=0;i<n;i++){
        cin>>a[i];
    }
    
    int64_t tmp;
    for(int64_t i=0;i<n;i++){
        tmp=(i+1)*(n-i)-1;
        mp[tmp]++;
        if(i>0){
            tmp=(i)*(n-i);
            mp[tmp]+=(a[i]-a[i-1]-1);
        }
    }
    int64_t k;
    while(q--){
        cin>>k;
        if(mp.find(k)==mp.end()){
            cout<<0<<" ";
        }
        else{
            cout<<mp[k]<<" ";
        }
        
    }
    cout<<endl;
    
    
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