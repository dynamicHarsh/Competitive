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
    vector<int> a(n);
    vector<int> d(n);
    d[n-1]=n;
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=n-2;i>=0;i--){
        d[i]=i+1;
        if(a[i]==a[i+1]){d[i]=d[i+1];}
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        if(d[l-1]>r-1){cout<<"-1 -1"<<endl;}
        else{
            cout<<l<<" "<<d[l-1]+1<<endl;
        }
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