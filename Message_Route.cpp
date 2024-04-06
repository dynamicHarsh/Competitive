#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

vector<int> adj[100005];
int p[100005];


void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=0,a,b;i<m;i++){
        cin>>a>>b;
        a--,b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(p,-2,n*sizeof(int));
    queue<int> qu;
    qu.push(0);
    while(qu.size()){
        int el=qu.front();
        qu.pop();
        for(auto x: adj[el]){
            if(p[x]<0){
                p[x]=el;
                qu.push(x);
            }
        }
    }

    if(p[n-1]<0){
        cout<<"IMPOSSIBLE\n";
        return;
    }
    vector<int> ans;
    int u=n-1;
    while(u){
        ans.push_back(u);
        u=p[u];
    }
    ans.push_back(0);
    cout<<ans.size()<<endl;
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]+1<<" ";
    }
    cout<<endl;

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