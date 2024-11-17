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

    vector<string> s(n);
    
    for(int i=0;i<n;i++) {
        cin>>s[i];
        
    }
    ll ans=0;
    set<string> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            string a=s[i],b=s[j],c="";
            for(int f=0;f<k;f++){
                
                if(a[f]==b[f]) c=c+a[f];
                else{
                c+='S'^'E'^'T'^a[f]^b[f];
                }
            }
            // cout<<c<<endl;
           if(st.find(c)!=st.end()){
            ans++;
           }

            // cout<<ans<<endl;
            
        }
        st.insert(s[i]); 
    }
    cout<<ans<<endl;



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