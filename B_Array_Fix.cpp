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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=0;
    bool possible=true;
    for(auto x: a){
        if(x>=10 && x/10>=p && x%10>=x/10){
            p=x%10;
        }
        else{
            if(x>=p){
                p=x;
            }
            else{
                // cout<<p<<" "<<x<<endl;
                possible=0;
                break;
            }
        }
    }
    cout<<(possible?"YES\n": "NO\n");
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