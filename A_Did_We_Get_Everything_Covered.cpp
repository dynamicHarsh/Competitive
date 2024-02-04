#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,k,m;
    cin>>n>>k>>m;
    string s;
    cin>>s;
    vector<int> f(26,0);
    for(auto ch: s){
        f[ch-'a']++;
    }
    
    for(int i=0;i<n;i++){
        if(f[i]<k){
            cout<<"NO"<<endl;
            for(int j=0;j<n;j++){
                cout<<char(97+i);
            }
            cout<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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