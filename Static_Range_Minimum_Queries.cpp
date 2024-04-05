#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
const int MAX_N=200005;
const int LOG=18;
int logpow[MAX_N];
int m[MAX_N][LOG];

int query(int l,int r){
    int len=r-l+1;
    int pow=0;
    // while((1<<(pow+1))<=len){
    //     pow++;
    // }
    pow=logpow[len];
    return min(m[l][pow],m[r-(1<<pow)+1][pow]);
}

void solve(){
    int n,q;
    cin>>n>>q;
    int a[n];
    logpow[1]=0;
    for(int i=2;i<=n;i++){
        logpow[i]=logpow[i/2]+1;
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[i][0]=a[i];
    }
    for(int j=1;j<LOG;j++){
        for(int i=0;(i+(1<<j)-1)<n;i++){
            m[i][j]=min(m[i][j-1],m[i+(1<<(j-1))][j-1]);
        }
    }
    
    
    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        cout<<query(l,r)<<endl;
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