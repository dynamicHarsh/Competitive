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
    map<string,int> m;
    string ch;int e;
    for(int i=0;i<n;i++){
        cin>>e>>ch;
        sort(ch.begin(),ch.end());
        if(!m[ch]){m[ch]=e;}
        else {m[ch]=min(m[ch],e);}
        
    }
    
    auto f=[&](string a,string b)->int{
        if(!m[a] || !m[b]) return INT_MAX;
        else return m[a]+m[b];
    };
    int ans=INT_MAX;
    if(m["A"] && m["B"] && m["C"]){
        ans=m["A"]+m["B"]+m["C"];
    }
    if(m["ABC"]){
        ans=min(ans,m["ABC"]);
    }
    ans=min(ans,f("A","BC"));
    
    ans=min(ans,f("B","AC"));
    
    
    ans=min(ans,f("C","AB"));
    ans=min(ans,f("AB","BC"));
    ans=min(ans,f("AC","AB"));
    ans=min(ans,f("BC","AC"));


    if(ans==INT_MAX) cout<<"-1"<<endl;
    else cout<<ans<<endl;
    



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