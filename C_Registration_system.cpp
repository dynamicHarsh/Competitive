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
    unordered_map<string,int> m;
    string ans[n];
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        if(m[s]==0){
            ans[i]="OK";
            m[s]++;
        }
        else{
            string num=to_string(m[s]);
           ans[i]=s+num;
            m[s]++;
        }
    }
    for(auto x: ans){
        cout<<x<<endl;
    }
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