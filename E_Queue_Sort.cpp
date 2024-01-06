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
    int a[n];
    int mini=INT_MAX,ind;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<mini){
            mini=a[i];
            ind=i;
        }
    }
    bool possible=true;
    for(int i=ind;i<n-1;i++){
        if(a[i]>a[i+1]){
            possible=false;
            break;
        }
    }
    if(possible){
        cout<<ind<<endl;
    }
    else{
        cout<<"-1"<<endl;
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