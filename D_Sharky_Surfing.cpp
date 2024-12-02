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
    ll n,m,l;
    cin>>n>>m>>l;
    vector<vector<int>> hurdles(n,vector<int>(2,0));
    for(int i=0;i<n;i++) cin>>hurdles[i][0]>>hurdles[i][1];
    vector<vector<int>> powerup(m,vector<int>(2,0));
    for(int i=0;i<m;i++) cin>>powerup[i][0]>>powerup[i][1];

    ll power=1;
    int ind=0;
    ll ans=0;
    priority_queue<ll> pq;
    for(int i=0;i<n;i++){
        
        ll req=(hurdles[i][1]-hurdles[i][0])+2;
        
        
        while(ind<m && powerup[ind][0]<hurdles[i][0]){
            pq.push(powerup[ind][1]);
            ind++;
        }
        
        
        while(!pq.empty() && power<req){
            power+=pq.top();
            pq.pop();
            ans++;
        }
        
        if(power<req){
            cout<<"-1"<<endl;
            return;
        }
        
    }
    cout<<ans<<endl;
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