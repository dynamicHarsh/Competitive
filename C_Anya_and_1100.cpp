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
    int n=s.length();
    set<int> st;
    auto update=[&](int i){
        if(i>=0 && i<=n-4){
            if(s.substr(i,4)=="1100"){
                st.insert(i);
            }
            else{
                st.erase(i);
            }
        }
    };

    for(int i=0;i<=n-4;i++){
        update(i);
    }
    int q,i,v;
    cin>>q;
    while(q--){
        cin>>i>>v;
        --i;
        s[i]=(v+'0');
        for(int j=i-3;j<=i;j++){
            update(j);
        }
        cout<<(st.size()?"YES":"NO")<<endl;
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