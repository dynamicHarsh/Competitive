#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

int bfs(int n,int m){
    int lim=2e4+1;
    vector<int> lev(lim,-1);
    queue<int> q;
    q.push(n);
    lev[n]=0;
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        if(cur==m){
            return lev[cur];
        }
        int first=2*cur,second=cur-1;
        if(first<=lim && lev[first]==-1){
            q.push(first);
            lev[first]=lev[cur]+1;
        }
        if(second>=0 && second<=lim && lev[second]==-1){
            q.push(second);
            lev[second]=lev[cur]+1;
        }
    }
}

void solve(){
    int n,m;
    cin>>n>>m;
    cout<<bfs(n,m)<<endl;
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