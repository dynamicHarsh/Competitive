#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int t;
    cin>>t;
    while(t--){
        std::srand(t);
    int64_t n,k;
    cin>>n>>k;
    
     

    // Generate n in the range [1, 8]
    n = 1 + std::rand() % 8;
    int64_t a[n];
    // Generate k in the range [1, 10]
    k = 1 + std::rand() % 10;

    // Generate n integers in the range [1, 10]
    std::vector<int> integers;
    for (int i = 0; i < n; ++i) {
        integers.push_back(1 + std::rand() % 10);
    }
    cout<<n<<" "<<k<<endl;
    int ind=0;
    for (int num : integers) {
        cout<<num<<" ";
        a[ind]=num;
        ind++;
    }
    cout<<endl;
    


    for(int i=0;i<n;i++){
        cin>>a[i]; 
    }
    if(k>=n){
        cout<<(n*(n-1LL))/2LL<<endl;
    }
    else{
        sort(a,a+n);


    for(int i=1;i<n;i++){
        if(k<=0) break;
        if(a[i]==a[i-1]){
            a[i-1]=-1;
            k--;
        }
    }

    sort(a,a+n);
    

    int64_t ans=0LL;
    int64_t cnt=1LL;
   

    for(int i=0;i<n;i++){
        if(a[i]==-1) ans=ans+((n-i-1)*1LL);
        else{
            while(i+1<n && a[i+1]==a[i]){
            cnt++;
            i++;
           
        }
        ans=ans+cnt*(n-i-1)*1LL;
         
        cnt=1LL;
        }
        
    }
    
    cout<<ans<<endl;
    }
    cout<<endl;
    }
    
    


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