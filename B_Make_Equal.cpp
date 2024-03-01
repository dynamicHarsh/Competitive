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
    ull sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int inhand=0;
    int eq=sum/n;
    for(int i=0;i<n;i++){
        int diff=a[i]-eq;
        if(inhand+diff<0){
            cout<<"NO"<<endl;
            return;
        }
        inhand+=diff;
        
    }
    cout<<"YES"<<endl;
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