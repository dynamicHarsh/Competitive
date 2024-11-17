#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>> a(n,vector<ll>(3));
    for(int i=0;i<n;i++) cin>>a[i][0];
    for(int i=0;i<n;i++) {
        cin>>a[i][1];
        a[i][2]=i;
    }



   sort(a.begin(), a.end(), [](const vector<ll>& row1, const vector<ll>& row2) {
        return row1[0] < row2[0];
    });


    
    vector<ll> ans(n);ll sum=0;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for(int i=0;i<n;i++){
        sum+=a[i][1];
        
        ans[a[i][2]]=sum;
        pq.push(a[i][1]);
        if(pq.size()>k){
            sum-=pq.top();
            pq.pop();
        }
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
    // cin>>t;
    while(t--){
    solve();
    }
    return 0;
}