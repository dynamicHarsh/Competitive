#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int a,b;
    cin>>a>>b;
    if(a==b) cout<<"1"<<endl;
    else if(abs(a-b)%2==0) cout<<"3"<<endl;
    else cout<<"2"<<endl;
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