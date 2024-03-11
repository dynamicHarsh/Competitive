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
    
    vector<int> cnt1(n,0),cnt2(n,0),mex(n,0);
    int mex1=0,mex2=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt1[a[i]]++;
        while(cnt1[mex1]){mex1++;}
        mex[i]=mex1;
    }
    for(int i=n-1;i>=1;i--){
        cnt2[a[i]]++;
        while(cnt2[mex2]){mex2++;}
        if(mex[i-1]==mex2){
            cout<<"2"<<endl;
            cout<<"1 "<<i<<endl;
            cout<<i+1<<" "<<n<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;

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