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
    string ans="";
    int ind=0,cnt=0;
    char vowel[]={'a','e','i','o','u'};
    while(cnt<n){
        ans+=vowel[ind];
        ind=(ind+1)%5;
        cnt++;
    }
    sort(ans.begin(),ans.end());
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