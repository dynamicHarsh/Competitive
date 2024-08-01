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
    for(int i=0;i<n;i++) cin>>a[i];

    vector<int> pre(n+1,0);
    for(int i=0;i<n;i++){
        if(a[i]){
            pre[(i-a[i]+1)>=0?(i-a[i]+1):0]+=1;
            pre[i+1]+=-1;
        }
    }
    for(int i=1;i<=n;i++){
        pre[i]+=pre[i-1];
        if(pre[i-1]) cout<<"1 ";
        else cout<<"0 ";
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