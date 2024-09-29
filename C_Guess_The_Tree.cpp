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
    vector<int> parent(n+1);

    auto f=[&](int root,int i,auto &&f)->void{
        cout<<"? "<<root<<" "<<i<<endl;
        cout.flush();
        int x;
        cin>>x;
        if(x==root) parent[i]=x;
        else f(x,i,f);
    };

    for(int i=2;i<=n;i++) f(1,i,f);

    cout<<"!"<<endl;
    cout.flush();
    for(int i=2;i<=n;i++) cout<<" "<<i<<" "<<parent[i];
    cout<<endl;
    cout.flush();

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