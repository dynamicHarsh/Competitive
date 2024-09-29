#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

bool check(vector<int> a){
    int n=a.size();
    int g=0;
    for(int i=0;i<n-1;i++){
        int cur=__gcd(a[i],a[i+1]);
        if(g>cur) return false;
        g=cur;
    }
    return true;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ind=-1;
    for(int i=0;i<n-2;i++){
        if(__gcd(a[i],a[i+1])>__gcd(a[i+1],a[i+2])){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        cout<<"YES"<<endl;
        return;
    }
    vector<int> b=a,c=a,d=a;
    b.erase(b.begin()+ind);
    c.erase(c.begin()+ind+1);
    d.erase(d.begin()+ind+2);

    bool possible=check(b) || check(c) || check(d);
    if(possible) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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