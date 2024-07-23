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
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<int> f(n+1,1);
    vector<int> u(n+1,-1),v(n+1,-1);
    for(int x=n-1;x;x--){
        vector<int> mark(x,0);
        for(int i=1;i<=n;i++){
            if(f[i]){
                int t=a[i]%x;
                if(mark[t]){
                    u[x]=mark[t];
                    v[x]=i;
                    f[i]=0;
                    break;
                }
                else{
                    mark[t]=i;
                }
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i=1;i<n;i++){
        cout<<u[i]<<" "<<v[i]<<endl;
    }
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