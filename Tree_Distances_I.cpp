#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

const int MAXN=200001;
vector<int> adj[MAXN];
int first_max[MAXN];
int second_max[MAXN];
int c[MAXN];


void dfs1(int v,int p){
  first_max[v]=0;
  second_max[v]=0;


  for(auto child: adj[v]){
    if(child==p) continue;
    dfs1(child,v);
    if(first_max[v]<first_max[child]+1){
      second_max[v]=first_max[v];
      first_max[v]=first_max[child]+1;
      c[v]=child;
    }
    else if(first_max[child]+1>second_max[v]){
      second_max[v]=first_max[child]+1;
    }
  }

}



void dfs2(int v,int p){


  for(auto child: adj[v]){
    if(child==p) continue;
    if(c[v]==child){
      if(second_max[v]+1>first_max[child]){
        second_max[child]=first_max[child];
        first_max[child]=second_max[v]+1;
        c[child]=v;
      }
      else{
        second_max[child]=max(second_max[child],second_max[v]+1);
      }
    }
    else{
      second_max[child]=first_max[child];
      first_max[child]=first_max[v]+1;
      c[child]=v;
    }
    dfs2(child,v);

  }
}

void solve(){
    int n,u,v;
    cin>>n;
    for(int i=0;i<n-1;i++){
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    dfs1(1,-1);
    dfs2(1,-1);

    for(int i=1;i<=n;i++){
      cout<<first_max[i]<<" ";
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