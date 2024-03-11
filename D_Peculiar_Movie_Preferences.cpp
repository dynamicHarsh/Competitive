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
    string s[n];
    map<string,int> m;
    int f=0;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        m[str]=1;
        s[i]=str;
        string rev=str;
        reverse(rev.begin(),rev.end());
        if(str.length()==1 || rev==s[i]){
            f=1;
        }
    }
    if(f==1){
        cout<<"YES"<<endl;
        return;
    }
    set<string> st;
    for(int i=0;i<n;i++){
        string r=s[i];
        reverse(r.begin(),r.end());
        if(m[r]==1){
            cout<<"YES"<<endl;
            return;
        }
        if(s[i].length()==2){
            if(st.find(s[i])!=st.end()){
                cout<<"YES"<<endl;
                return;
            }
        }
        if(s[i].length()==3){
            string s1=s[i].substr(0,2);
            string s2=s[i].substr(1,2);
            reverse(s1.begin(),s1.end());
            reverse(s2.begin(),s2.end());
            if(m[s1]==1 || m[s2]==1){
                cout<<"YES"<<endl;
                return;
            }
            st.insert(s1);
            st.insert(s2);
        }
    }
    cout<<"NO"<<endl;

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