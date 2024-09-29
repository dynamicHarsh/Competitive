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
    int a[n],b[n];
    a[0]=1;
    for(int i=1;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);

    int l=0,r=n;
    
    function<bool(int)> check=[&](int k)->bool{
        int l1=0;
        int l2=l1+k;
        while(l1<n-k){
            if(a[l1]>=b[l2]){
                return false;
                break;
            }
            l1++;
            l2++;
        }
        return true;
    };

    int ans=INT_MAX;
    while(l<=r){
        int mid=(l+r)/2;
        if(check(mid)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
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