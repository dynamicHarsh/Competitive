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
    int left=1,right=n;
    vector<int> ans(n+1);
    int ab,ba;
    while(left<right){
        cout<<"? "<<left<<" "<<right<<endl;
        cout.flush();
        cin>>ab;
        cout<<"? "<<right<<" "<<left<<endl;
        cout.flush();
        cin>>ba;
        if(ab>ba){
            ans[left]=ab;
            left++;
        }
        else{
            ans[right]=ba;
            right--;
        }
    }
    ans[left]=n;
    cout<<"! ";
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
        cout.flush();
    }
    cout<<endl;


}
 
int main(){
    ios::sync_with_stdio(false);
      cin.tie(0);
 
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
    return 0;
}