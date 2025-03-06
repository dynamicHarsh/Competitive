#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    string s;
    cin>>s;
    ll sum=0;
    ll two=0,three=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        int dig=s[i]-'0';
        if(dig==2) two++;
        else if(dig==3) three++;
        sum+=dig;
    }
    bool flag=false;
    for(ll i=0;i<=two;i++){
        for(ll j=0;j<=three;j++){
            if((sum+2*i+6*j)%9==0){
                flag=true;
                break;
            }
        }
        if(flag) break;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}