#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    int n;
    cin>>n;
    vector<ll> x(n),y(n);
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    ll a,b;
    if(n%2==0){
        int mid=n/2;
        a=x[mid]-x[mid-1]+1LL;
        b=y[mid]-y[mid-1]+1LL;
        cout<<a*b<<endl;
    }
    else{
        cout<<"1"<<endl;
    }
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