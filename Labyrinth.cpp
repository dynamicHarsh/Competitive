#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define ar array
#define endl "\n"
int r,c,si,sj,ei,ej;
string s[1005],p[1005];
int dirx[4]={1,0,-1,0};
int diry[4]={0,1,0,-1};
char dir[4]={'D','R','U','L'};
int d[1005][1005];
bool valid(int x,int y){
 return (x>=0 && x<r && y>=0 && y<c && s[x][y]=='.');
}


void solve(){
    
    cin>>r>>c;
    for(int i=0;i<r;i++){
        cin>>s[i];
        for(int j=0;j<c;j++){
            if(s[i][j]=='A'){
                si=i,sj=j;
            }
            if(s[i][j]=='B'){
                ei=i,ej=j;
                s[i][j]='.';
            }
        }
        p[i]=string(c,'0');
    }
    queue<ar<int,2>> qu;
    qu.push({si,sj});
    while(qu.size()){
        ar<int,2> u=qu.front();
        qu.pop();
        for(int i=0;i<4;i++){
            int ni=u[0]+dirx[i];
            int nj=u[1]+diry[i];
            if(!valid(ni,nj)){
                continue;
            }
            qu.push({ni,nj});
            s[ni][nj]='#';
            p[ni][nj]=dir[i];
            d[ni][nj]=i;
        }
    }
    
    if(p[ei][ej]!='0'){
        cout<<"YES"<<endl;
        string ans="";
        
        while(ei^si || ej^sj){//while start and end points are not same
        ans+=p[ei][ej];
        int dd=d[ei][ej];
        int dr=dd^2;
        ei+=dirx[dr];
        ej+=diry[dr];
        } 

        cout<<ans.size()<<endl;
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
 
int main(){
    ios::sync_with_stdio(false);
      cin.tie(0);

    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
    return 0;
}