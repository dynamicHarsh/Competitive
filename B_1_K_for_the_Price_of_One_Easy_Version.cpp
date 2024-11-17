#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,coins,k;
    cin>>n>>coins>>k;

    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int cnt=0,ans=0,sum=0,pref=0;


    for(int i=0;i<k;i++){
        sum=pref;
        if(sum>coins) break;
        cnt=i;
        for(int j=i+k-1;j<n;j+=k){
            if((sum+a[j])<=coins){
                cnt+=k;
                sum+=a[j];
            }
            else{
                break;
            }
        }
        pref+=a[i];
        ans=max(ans,cnt);
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