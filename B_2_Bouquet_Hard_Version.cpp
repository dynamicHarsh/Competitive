#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    // Sliding window
    ll n;
    ull m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(2,0));
    for(int i=0;i<n;i++){
        cin>>a[i][0];
    }
    for(int i=0;i<n;i++){
        cin>>a[i][1];
    }
    sort(a.begin(),a.end(),greater<vector<int>>());
    ll beg=0,end=0;
    ull maxi=0;
    ull cur=0;
    ull left,quant;
    while(beg<n && end<n){
        left=m-cur;
         
        while(a[beg][0]>a[end][0]+1){
            cur-=a[beg][0]*a[beg][1];
            beg++;
        }
        if(left>=a[beg][0]*a[beg][1]){
            quant=a[beg][1];
        }
        else{
            quant=left/a[beg][0];
        }
        cur+=a[end][0]*quant;
        end++;
        while(cur>m){
            quant=ceil((cur-m)/(double)a[beg][0]);
            cur-=a[beg][0]*quant;
            beg++;
            
        }
        maxi=max(maxi,cur);
    }
    cout<<maxi<<endl;

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