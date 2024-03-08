#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
// #define endl "\n"

int query(int x,int y){
    cout<<"? "<<x<<" "<<y<<endl;
    
    int q;
    cin>>q;
    return q;
} 

void solve(){
    int n,m;
    cin>>m>>n;
    int a=query(1,1);
    
    int sum=a+2;
    int lowx=min(m,1+a);
    int upy=min(n,1+a);
    int lowy=sum-lowx;
    int upx=sum-upx;
    int dis1=query(lowx,lowy);
    int dis2=query(upx,upy);
    bool found=false;
    if(lowx-dis1/2<=m && lowy+dis1/2<=n && dis1%2==0){
        int check=query((lowx-dis1/2),(lowy+dis1/2));
        if(check==0){
            found=true;
            cout<<"! "<<lowx-dis1/2<<" "<<lowy+dis1/2<<endl;
        } 
    }
    if(!found){
        
        cout<<"! "<<upx+dis2/2<<" "<<upy-dis2/2<<endl;
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