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
    int a[n+1]={};
    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>4){
            ans++;
            a[i]=0;
        }
    }
    
    for(int i=0;i<n;i++){
        
        if(a[i]==0){
            continue;
        }
        if(a[i]>2){
            ans++;
            continue;
        }
        else if(a[i]<=2){
            int last=-1;
            for(int j=i+1;j<n;j++){
                if(a[j]<=2){
                    last=j;
                    break;
                }
            }
            if(last==-1){
                ans++;
                continue;
            }
            int x=last-i;
            if(x&1){
                ans+=x;
                i=last;
            }
            else{
                ans+=x;
                i=last-1;
            }
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