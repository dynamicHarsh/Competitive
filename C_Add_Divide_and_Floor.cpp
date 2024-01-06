#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){ cin>>a[i];}
    sort(a,a+n);
    ll mini=a[0],maxi=a[n-1];
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    
    vector<ll> vec;
    while(mini!=maxi){
        int el=mini%2;
        mini=(mini+el)/2;
        maxi=(maxi+el)/2;
        vec.push_back(el);
    }
    cout<<vec.size()<<endl;
    if(vec.size()<=n){
        for(auto x: vec){
            cout<<x<<" ";
        }
        cout<<endl;
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