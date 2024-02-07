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
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            if(first==-1){
                first=i;
                last=i;
            }
            else{
                last=i;
            }
        }
    }
    if(first==-1)
    cout<<"0"<<endl;
    else
    cout<<last-first+1<<endl;
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