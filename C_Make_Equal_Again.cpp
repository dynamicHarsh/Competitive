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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt1=1;
    int cnt2=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){cnt1++;}
        else{
            break;
        }
    }
    for(int i=n-2;i>=0;i--){
        if(a[i]==a[i+1]){cnt2++;}
        else{
            break;
        }
    }
    int cnt;
    // cout<<"cnt1 "<<cnt1<<"   cnt2 "<<cnt2<<endl;
    if(cnt1==n){
        cout<<"0"<<endl;
        return;
    }
    if(a[0]==a[n-1]){
        cnt=cnt1+cnt2;
    }
    else{
        cnt=max(cnt1,cnt2);
    }
    cout<<n-cnt<<endl;


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