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
    vector<set<int>> v(n);
    set<int> unionset;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            int e;
            cin>>e;
            v[i].insert(e);
            unionset.insert(e);
        }
    }
    int ans=INT_MIN;
    
    for(int i=1;i<=50;i++){
        int c=0;
        set<int> sz;
        if(unionset.find(i)!=unionset.end()){
            for(int j=0;j<n;j++){
            if(v[j].find(i)==v[j].end()){
                c++;
                for(auto x: v[j]){
                    sz.insert(x);
                }        
            }
        }
        
        ans=max(ans,(int)sz.size());
        
        }
        
    }
   cout<<ans<<endl;
    
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