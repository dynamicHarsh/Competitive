#include <bits/stdc++.h>
using namespace std;

typedef int64_t i64;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<long long> vi;

const ll MOD = 1e9+7;
const ll INF = 1e18;

#define endl "\n"
#define pb push_back
#define all(x) x.begin(), x.end()

void _print(int x) { cerr << x; }
void _print(long long x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(char x) { cerr << x; }
void _print(bool x) { cerr << (x ? "true" : "false"); }
template <class T> void _print(vector<T> &v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }

/////////////////////Trust the Process/////////////////////
void solve() {
    int n;
    cin>>n;
    vi a(n);
    ll x;
    for(int i=1;i<n;i++){
        cout<<"? "<<1<<" "<<i+1<<endl;
        cout.flush();
        cin>>x;
        a[i]=x;
    }
    if(a==vector<ll>(n,0LL)){
        cout<<"! IMPOSSIBLE"<<endl;
        cout.flush();
        return;
    }
    int i=0;
    while(a[i]==0){
        i++;
    }
    string ans(n,'0');
    for(int j=0;j<i-a[i];j++){
        ans[j]='1';
    }
    for(int j=i;j<n;j++){
        ans[j]=(a[j]>a[j-1])?'1':'0';
    }
    cout<<"! "<<ans<<endl;
    cout.flush();
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}