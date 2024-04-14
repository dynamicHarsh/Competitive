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
    int x;
    set<int> s;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(s.find(x)==s.end()){
            s.insert(x);
        }
        else{
            cnt++;
        }
    }
    cout<<cnt<<endl;
    

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