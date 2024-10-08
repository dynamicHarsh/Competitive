#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
class DisjointSetUnion{
    vector<int> rank,parent,size;
    public:
    
    DisjointSetUnion(int n){
        // rank.resize(n+1,0);
        size.resize(n+1,1);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }

    int findUPar(int x){
        if(x==parent[x]) return x;
        return parent[x]=findUPar(parent[x]);
    }

    void Union(int u,int v){
        int upu=findUPar(u);
        int upv=findUPar(v);
        if(upu==upv) return;
        if(size[upu]>=size[upv]){
            size[upu]+=size[upv];
            parent[upv]=upu;
        }
        else{
            size[upv]+=size[upu];
            parent[upu]=upv;
        }
    }
    int sz(int v){
        return size[findUPar(v)];
    }
};
void solve(){
    int n,m;
    cin>>n>>m;
    DisjointSetUnion dsu(n);
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        vector<int> v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
        }
        for(int i=0;i<k-1;i++){
            dsu.Union(v[i],v[i+1]);
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dsu.sz(i)<<" ";
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