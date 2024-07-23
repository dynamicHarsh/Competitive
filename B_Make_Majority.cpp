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
    string fin="";
    int f=1;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(f){
                fin+=s[i];
                f=0;
            }
            else{
                continue;
            }
        }
        else{
            f=1;
            fin+=s[i];
        }
        
    }
    int cz=0,co=0;
    for(int i=0;i<fin.length();i++){
        if(fin[i]=='0'){cz++;}
        else{co++;}
    }
    if(co>cz){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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