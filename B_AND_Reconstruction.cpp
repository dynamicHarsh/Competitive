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
    int b[n-1];
    vector<int> a(n,0);
    for(int i=0;i<n-1;i++){
        cin>>b[i];
    }
    for(int i=0;i<n-1;i++){
        a[i]=a[i]|b[i];
        a[i+1]= a[i+1]|b[i];
    }
    for(int i=0;i<n-1;i++){
        if(b[i]!=(a[i]&a[i+1])){
            cout<<"-1"<<endl;
            return;
        }
    }
    for(auto x: a){
        cout<<x<<" ";
    }
    cout<<endl;
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