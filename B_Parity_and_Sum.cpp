#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n;
    cin>>n;
    vector<ll> a;
    ll e;
    ll maxi=-1;
    for(int i=0;i<n;i++){
        cin>>e;
        if(e%2==0){
            a.push_back(e);
        }
        else{
            maxi=max(maxi,e);
        }
    }
    ll ans=0;
    ll mo=maxi;
    if(maxi==-1 || a.size()==0){cout<<"0"<<endl; return ;}
    sort(a.begin(),a.end());
    for(auto even: a){
        if(even<=maxi) ans++;
        else{
            ans+=2;
        }
        maxi=maxi+even;
    }
    ll ans2=0;
    int ne=a.size();
    if(a[ne-1]>mo){ mo+=a[ne-1]; ans2++;}
    ans2+=ne;
    cout<<min(ans,ans2)<<endl;
    
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