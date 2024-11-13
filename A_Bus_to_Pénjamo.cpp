#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n,r;
    cin>>n>>r;
    int sum=0,odd=0,e;
    for(int i=0;i<n;i++){
        cin>>e;
        sum+=e;
        if(e%2==1) odd++;
    }
    ll happy=sum-odd;
    ll availrow=r-(happy)/2;
    ll maxi=0;
    for(ll i=1;i<=odd;i++){
        if((odd-i)<=2*(availrow-i)){
            maxi=max(maxi,i);
        }
        else{
            break;
        }
    }
    cout<<happy+maxi<<endl;

    
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