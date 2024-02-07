#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,k;
    bool flag=false;
    cin>>n>>k;
    vector<int> ans;
    ans.push_back(n);
    for(int i=1;i<k;i++){
        ans.push_back(ans.back()-(n-i)/k-1);
    }
    ans.push_back(0);
    for(int i=1;i<k;i+=2){
        ans[i]=ans[i+1]+1;
    }
    ans.pop_back();
    int pos=0;
    while(ans.size()<n){
        if(flag){
            ans.push_back(ans[pos]+1);
            flag=false;
        }
        else{
            ans.push_back(ans[pos]-1);
            flag=true;
        }
        pos++;
    }
    for(auto x: ans){
        cout<<x<<" ";
    }
    cout<<endl;
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