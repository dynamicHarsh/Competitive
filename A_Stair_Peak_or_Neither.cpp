#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && b<c ){
        cout<<"STAIR"<<endl;
    }
    else if(a<b && b>c){
        cout<<"PEAK"<<endl;
    }
    else{
        cout<<"NONE"<<endl;
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