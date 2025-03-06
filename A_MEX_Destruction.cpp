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
    vector<int> a(n);
    int cnt=0,c=0,z=0;
    bool flag=true;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0) z++;
        if(a[i]==0 && c){
            cnt+=1;
            c=0;
            
        }
        else{
            c++;
        }
    }
    if(c>0) cnt+=1;

    if(z==n) cout<<"0"<<endl;
    else if(cnt==1) cout<<"1"<<endl;
    else cout<<"2"<<endl;
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