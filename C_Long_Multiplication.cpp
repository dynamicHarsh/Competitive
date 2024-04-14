#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    string x,y;
    cin>>x>>y;
    int n=x.size();
    bool flag=0;
    string a,b;
    for(int i=0;i<n;i++){
        if(x[i]==y[i]){
            a.push_back(x[i]);
            b.push_back(x[i]);
            continue;
        }
        else if(flag==0){
            a.push_back(max(x[i],y[i]));
            b.push_back(min(x[i],y[i]));
            flag=1;
        }
        else{
            b.push_back(max(x[i],y[i]));
            a.push_back(min(x[i],y[i]));
        }
    }
    cout<<a<<"\n"<<b<<"\n";
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