#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod = 1e9 + 7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve() {
    int n, x, a, y, b,k;
    cin >> n;
    vector<int> vi(n);
    for (int i = 0; i < n; i++) cin >> vi[i];
    cin >> x >> a;
    cin >> y >> b;
    cin >> k;

    
    sort(vi.rbegin(),vi.rend());

    
    if (y > x) {
        swap(x, y);
        swap(a, b);
    }

    int lo = 1, hi = n, mid;
    int ans = -1;
    int lcm = (a * b) / __gcd(a, b);

    

    
    while (lo <= hi) {
        mid = (lo +hi)/2;
        vector<int> temp(mid,0);
        int sum=0,itr=0;
        for(int i=lcm-1;i<mid;i+=lcm){
            temp[i]=vi[itr++];
            sum+=(temp[i]/100)*(x+y);
        }
        for(int i=a-1;i<mid;i+=a){
            if(temp[i]==0){
            temp[i]=vi[itr++];
            sum+=(temp[i]/100)*(x);
            }
        }
        for(int i=b-1;i<mid;i+=b){
            if(temp[i]==0){
            temp[i]=vi[itr++];
            sum+=(temp[i]/100)*(y);}
        }
        temp.clear();
        // cout<<mid<<"    "<<sum<<endl;
       
        if (sum>=k) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << ans << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
