#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void solve(){
    int n,m,x;
    cin>>n>>m>>x;
    int d;
    char c;
   
    vector<int> a(n+1,0),b(n+1,0);
     a[x-1]=1;
    for(int i=0;i<m;i++){
        cin>>d>>c;
        fill(b.begin(),b.end(),0);
        for(int j=0;j<n;j++){
            if(!a[j]){
                continue;
            }
            if(c=='0' || c=='?'){
                b[(d+j)%n]=1;
            }
            if(c=='1' || c=='?'){
                b[(n-d+j)%n]=1;
            }
        }
        a=b;
    }
    cout<<count(a.begin(),a.end(),1)<<"\n";
    for(int i=0;i<n;i++){
        if(a[i]){
            cout<<i+1<<" ";
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