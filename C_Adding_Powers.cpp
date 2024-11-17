#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int64_t n,k;
    cin>>n>>k;
    int64_t a[n];
    if(k==1){cout<<"YES"<<endl;return;}
    for(int i=0;i<n;i++) cin>>a[i];

    vector<bool> vis(60,false);

    for(int i=0;i<n;i++){
        int64_t x=a[i];
        vector<int64_t> temp;
        while(x){
            temp.push_back(x%k);
            x/=k;
        }
        for(int i=temp.size()-1;i>=0;i--){
            if(temp[i]){
                if(vis[i] || temp[i]>1){
                    cout<<"NO"<<endl;
                    return;
                }
                else{
                    vis[i]=true;
                }
            }
        }
        
    }
    cout<<"YES"<<endl;




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