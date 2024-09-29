#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    string s;
    cin>>s;
    char row=s[0];
    int col=s[1]-'0';

    for(int i=1;i<=8;i++){
        if(i!=col) cout<<row<<i<<endl;
    }
    for(char ch='a';ch<='h';ch++){
        if(ch!=row) cout<<ch<<col<<endl;
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