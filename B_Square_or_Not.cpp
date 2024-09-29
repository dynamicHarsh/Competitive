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
    string s;
    cin>>s;
    int k=sqrt(n);
    if((k*k)!=n){cout<<"No"<<endl; return;}

    for(int i=1;i<=k;i++){
        if(i==1 || i==k){
            for(int j=1;j<=k;j++){
                int ind=(i-1)*k+j-1;
                if(s[ind]!='1'){cout<<"No"<<endl; return;}
            }
        }
        else{
            for(int j=1;j<=k;j++){
                int ind=(i-1)*k+j-1;
                if(j==1 || j==k){
                    if(s[ind]!='1'){
                        cout<<"No"<<endl; return;
                    } 
                }
                else{
                    if(s[ind]!='0'){
                        cout<<"No"<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<"Yes"<<endl;
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