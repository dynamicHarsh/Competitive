#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

class DisjointSetUnion{
    
    public:
    vector<int> rank,parent,size;
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
        if(size[upu]>=size[upv]){
            size[upu]+=size[upv];
            parent[v]=upu;
        }
        else{
            size[upv]+=size[upu];
            parent[u]=upv;
        }
    }

    // void UnionByRank(int u,int v){
    //     int upu=findUPar(u);
    //     int upv=findUPar(v);
    //     if(rank[upu]==rank[upv]){
    //         parent[v]=upu;
    //         rank[upu]++;
    //     }
    //     else if(rank[upu]>rank[upv]){
    //         parent[v]=upu;
    //     }
    //     else{
    //         parent[u]=upv;
    //     }
    // }

};


void solve(){
    DisjointSetUnion dsu(7);
    dsu.Union(2,5);
    dsu.Union(5,4);
    dsu.Union(1,2);
    dsu.Union(6,7);

    for(int i=1;i<=7;i++){
        cout<<dsu.size[i]<<" ";
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