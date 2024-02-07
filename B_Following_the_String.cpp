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
    for(int i=0;i<n;i++){cin>>a[i];}
    vector<int> ch(26,-1);
    string ans="";
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            if(a[i]-1==ch[j]){
                ans+=char(97+j);
                ch[j]++;
                break;
            }
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