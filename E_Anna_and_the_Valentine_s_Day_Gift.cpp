#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 int countTrailingZeros(ll n) {
    int count = 0;
    while (n % 10 == 0 && n != 0) {
        count++;
        n /= 10;
    }
    return count;
}
int countDigits(ll n) {
    if (n == 0) // Special case for zero
        return 1;

    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

void solve(){
    int n,m;
    cin>>n>>m;
    
    ll a[n];
    ull dig=0;
    vector<int> z;
    for(int i=0;i<n;i++){
        cin>>a[i];
        int zeros=countTrailingZeros(a[i]);
        if(zeros>0)
        z.push_back(zeros);


        dig+=countDigits(a[i]);
    }
    sort(z.begin(),z.end(),greater<int>());
    // cout<<"tot dig are=="<<dig<<endl;
    int turn=0;
    ull neg=0;
    for(auto i:z){
        if(turn%2==0){
            neg+=i;
        }
        turn++;
        
    }
    
    ull ans=dig-neg;
    // cout<<"m="<<m<<"  ans="<<ans<<endl;;
    if(ans>m){
        cout<<"Sasha"<<endl;
    }
    else{
        cout<<"Anna"<<endl;
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