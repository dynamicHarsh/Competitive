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
    for(int i=0;i<n;i++) cin>>a[i];

    int cnt=n/2;
    while(cnt>0 && a[cnt-1]==a[cnt]) cnt--;

    if(cnt==0){cout<<"0 0 0"<<endl;return;}

    int g=1;
    while(g<cnt && a[g-1]==a[g]) g++;

    int s=g+1;
    while(s+g<cnt && a[g+s-1]==a[g+s]) s++;

    int b=cnt-(g+s);

    if(b>g){
        cout<<g<<" "<<s<<" "<<b<<endl;
    }
    else{
        cout<<"0 0 0"<<endl;
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