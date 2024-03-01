#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int c;
    cin>>c;
    int n=26;
    string ans="";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(i+j+k+3==c){
                    ans+=char(97+i);
                    ans+=char(97+j);
                    ans+=char(97+k);
                    cout<<ans<<endl;
                    return;
                }
            }
            
        }
        
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