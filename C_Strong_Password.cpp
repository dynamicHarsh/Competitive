#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    string s,l,r;
    int m,n;
    cin>>s>>m>>l>>r;
    n=s.size();
    int nxt[n+1][10];
    for(int i=0;i<10;i++){nxt[n][i]=n;}
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<10;j++){
            nxt[i][j]=nxt[i+1][j];
            if(s[i]-'0'==j){
                nxt[i][j]=i;
            }
        }
    }
    int ind=0;
   for(int i=0;i<m;i++){
    int ind1=0;
    for(int ch=l[i]-'0';ch<=r[i]-'0';ch++){
        ind1=max(nxt[ind][ch]+1,ind1);
    }
        ind=ind1;
        if(ind>n){
            break;
        }
   }
   cout<<((ind>n)?"YES":"NO")<<endl;
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