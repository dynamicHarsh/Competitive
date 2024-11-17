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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=1;
    int maxi=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            cnt++;
        }
        else{
            maxi=max(cnt,maxi);
            cnt=1;
        }
    }
    maxi=max(cnt,maxi);
    cout<<n-maxi<<endl;
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