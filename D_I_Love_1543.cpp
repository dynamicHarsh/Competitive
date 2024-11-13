#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,m;
    cin>>n>>m;
    string mat[n];
    for(int i=0;i<n;i++){
        cin>>mat[i];
    }
    int dirx[]={0,1,0,-1};
    int diry[]={1,0,-1,0};
    
    int ans=0;
    for(int layer=0;layer<n/2;layer++){
        int lb=layer,ub=m-layer,bound=ub-lb,trav=2*(bound)+2*(n-2*layer-2)+3;
        string t="";
        int x=lb,y=lb,dir=0,cnt=0;
        for(int i=0;i<trav;i++){
            
            
            t+=mat[x][y];
            cnt++;
            cout<<t<<endl;
            if(cnt%bound==0){
                if(dir==0 || dir==2){bound=n-2*layer;}
                else{bound=m-2*layer;}
                dir=(dir+1)%4;
                cnt=1;
            }
            x=x+dirx[dir];
            y=y+diry[dir];
        }
        int len=t.length();
        cout<<t<<endl;
        for(int j=0;j<=len-4;j++){
            if(t.substr(j,4)=="1543") ans++;
        }
    }
    cout<<ans<<endl;
    
    
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