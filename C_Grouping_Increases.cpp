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
    int lastb=INT_MAX,lastc=INT_MAX;
    int penalty=0;
    for(int i=0;i<n;i++){
        if(lastb>lastc) swap(lastb,lastc);
        if(a[i]<=lastb){ lastb=a[i];}
        else if(a[i]<=lastc){ lastc=a[i];}
        else{
            lastb=a[i];
            penalty++;
        }
        
    }
    cout<<penalty<<endl;
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