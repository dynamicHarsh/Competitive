#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

int f(int day,int last,vector<vector<int>> &a){
    if(day<0){
        return 0;
    }
    int ans=INT_MIN;
    for(int i=0;i<3;i++){
        if(i!=last){
            ans=max(ans,f(day-1,i,a)+a[day][i]);
        }
        
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int> (3,0));
    
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    cout<<f(n-1,-1,a);
    
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