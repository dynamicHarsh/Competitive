#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> a(26,0);
    for(auto ch: s) a[ch-'a']++;
    int cnt=0;
    for(int i=0;i<26;i++){
        if(a[i]%2) cnt++; 
    }
    if(cnt>(k+1)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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