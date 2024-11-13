#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef int64_t i64;
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    i64 b,c,d;
    cin>>b>>c>>d;
    i64 a=0;
    bool possible=true;
    for(i64 pos=0;pos<62;pos++){
        i64 bi=(b>>pos)&1;
        i64 ci=(c>>pos)&1;
        i64 di=(d>>pos)&1;
        i64 ai=1;
        // 100 011
        if((bi && !ci && !di) || (!bi && ci && di)){
            possible=false;
            break;
        }
        if((ai | bi) - (ai & ci)== di){
            a=a | (1 << pos);
        }
    }
    if(!possible){
        cout<<"-1"<<endl;
    }
    else{
        cout<<a<<endl;
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