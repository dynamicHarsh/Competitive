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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int l,r,mini=INT_MAX;

    for(int i=0;i<n;i++){
        int cur=0;
        for(int j=i;j<n;j++){
            if(a[j]>a[i]) cur++;
            if(a[j]<a[i]) cur--; 
            if(cur<mini){
            l=i+1,r=j+1;
            mini=cur;
            }
        }
        
    }
    cout<<l<<" "<<r<<endl;
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