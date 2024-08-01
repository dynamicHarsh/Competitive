#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

int cost(string s){
  int ans=2;
  int n=s.length();
  for(int i=1;i<n;i++){
    if(s[i]!=s[i-1]) ans+=2;
    else ans+=1;
  }
  return ans;
}

void solve(){
    string s;
    cin>>s;
    int n=s.length();
    int maxi=0;
    string ans;
    for(int ind=0;ind<=n;ind++){
      for(char ch='a';ch<='z';ch++){
        string temp=s.substr(0,ind)+ch+s.substr(ind);
        int cst=cost(temp);
        if(cst>maxi){
          maxi=cst;
          ans=temp;
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