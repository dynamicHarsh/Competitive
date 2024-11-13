#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll a,b;
    cin>>a>>b;
    if(a>=b){
        cout<<a<<endl;
    }
    else if(b-((a-1)*2)>1){
        cout<<0<<endl;
    }
    else{
        ll lo=0,hi=a,mid,req=0;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(b-(mid*2)<=a-mid){
                req=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        cout<<a-req<<endl;
    }


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