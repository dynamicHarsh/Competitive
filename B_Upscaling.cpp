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
    char prev='#';
    for(int i=1;i<=n;i++){
        if(i%2==0){
            prev='.';
        }
        else{
            prev='#';
        }
        char tmp=prev;
        for(int j=1;j<=n;j++){
            cout<<prev<<prev;
            prev=(prev=='#'?'.':'#');
        }
        cout<<endl;
        for(int j=1;j<=n;j++){
            cout<<tmp<<tmp;
            tmp=(tmp=='#'?'.':'#');
        }
        cout<<endl;
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