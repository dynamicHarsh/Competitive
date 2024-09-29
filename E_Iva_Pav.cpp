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
    int q;
    cin>>q;
    int query[q][2];
    for(int i=0;i<q;i++) cin>>query[i][0]>>query[i][1];
    vector<vector<int>> b(n+1,vector<int> (32,0));



    function<int(int,int)> num=[&](int l,int r)->int{
        int ans=0;
        for(int i=0;i<32;i++){
            if((b[r][i]-b[l][i])==(r-l))
            ans=ans| (1<<i);
        }
        return ans;
    };
    for(int ind=0;ind<n;ind++){
        int el=a[ind];
        for(int i=0;i<32;i++){
            b[ind+1][i]=b[ind][i]+((el>>i)&1);
        }
    }
    
    function<int(int,int)> get_ans=[&](int l,int k)->int{
        int lo=l;
        int hi=n;
        int ans=-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(num(l-1,mid)>=k){
                ans=max(mid,ans);
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    };

    for(int i=0;i<q;i++){
        int l=query[i][0];
        int k=query[i][1];
        cout<<get_ans(l,k)<<" ";

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