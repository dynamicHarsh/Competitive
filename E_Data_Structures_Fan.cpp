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
    string s;
    cin>>s;
    int x0=0,x1=0;
    string str="#"+s;
    vector<int> px(n+1,0);
    for(int i=1;i<=n;i++){
        px[i]=px[i-1]^a[i-1];
        if(str[i]=='0') x0^=a[i-1];
        else x1^=a[i-1];
    }
    int tmpxor=0;
    int q;
    cin>>q;
    while(q--){
        int type;
        cin>>type;

        if(type==1){
            int l,r;
            cin>>l>>r;
            tmpxor=px[r]^px[l-1];
            x0^=tmpxor;
            x1^=tmpxor;
        }
        else{
            int g;
            cin>>g;
            if(g==0) cout<<x0<<" ";
            else cout<<x1<<" ";
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