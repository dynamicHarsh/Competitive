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
    int e,minus=0,plus=0;
    for(int i=0;i<n;i++){
        cin>>e;
        if(e==-1) minus++;
    }
     int ops = 0;
    while (minus > n / 2 || minus % 2 == 1) {
        minus--;
        ops++;
    }
    cout<<ops<<endl;

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