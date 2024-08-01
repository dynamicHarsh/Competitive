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
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    bool flag=true;
    for(int i=1;i<n;i++){
        if(a[i]%2!=a[i-1]%2){
            flag=false;
            break;
        }
    }
    if(!flag){
        cout<<-1<<endl;
        return;
    }

    int cur=0;
    cout<<"39"<<endl;
    while(cur<39){
        cur++;
        int mini=*min_element(a,a+n);
        int maxi=*max_element(a,a+n);
        int el=mini+(maxi-mini)/2;
        for(int i=0;i<n;i++){
            a[i]=abs(a[i]-el);
        }
        cout<<el<<endl;
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