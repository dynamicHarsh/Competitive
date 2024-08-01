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
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    ll beg=0,end=0;
    ull maxi=0;
    ull cur=0;
    while(beg<n && end<n){
        while(a[beg]>a[end]+1){
            cur-=a[beg];
            beg++;
        }
        cur+=a[end];
        end++;
        while(cur>m){
            cur-=a[beg];
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