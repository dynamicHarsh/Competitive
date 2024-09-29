#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
// #define pb push_back
#define endl "\n"
 
void solve(){
    int n,k,pb,ps;
    cin>>n>>k>>pb>>ps;
    int p[n],a[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
        p[i]--;
    }
    for(int i=0;i<n;i++) cin>>a[i];

    function<int64_t(int)> calc=[&](int pos)->int64_t{
        int64_t ans=0;
        int64_t sum=0;
        for(int i=0;i<min(k,n);i++){
            ans=max(ans,1LL*(k-i)*a[pos]+sum);
            sum+=a[pos];
            pos=p[pos];
        }
        return ans;
    };

    int64_t score1=calc(pb-1);
    int64_t score2=calc(ps-1);
    if(score1>score2) cout<<"Bodya"<<endl;
    else if(score1<score2) cout<<"Sasha"<<endl;
    else cout<<"Draw"<<endl;
    

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