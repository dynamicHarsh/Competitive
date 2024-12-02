#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int64_t n;
    cin>>n;
    vector<int64_t> a(n+1);
    
    for(int64_t i=1;i<=n;i++){cin>>a[i]; a[i]=a[i]^a[i-1];}
    bool possible=(a[n]==0)?true: false;
    
    for(int64_t i=1;i<=n;i++){
        for(int64_t j=i+1;j<n;j++){
            if(a[i]==(a[i]^a[j]) && a[i]==(a[n]^a[j])){
                possible |=true;
            }
        }
        
    }
    cout<<((possible)?"YES":"NO")<<endl;
    
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