#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    ll n;
    cin >> n;
    vector<vector<double>> a(n, vector<double>(2, 0));
    
   
    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
    }

    
    auto check = [&](double speed) -> int {
        double time;
        for (int i = 0; i < n; i++) {
            time = ((double)(i + 1)) / speed;  
            if (time < a[i][0] - 1e-7) return -1;  
            if (time > a[i][1] + 1e-7) return 1;   
        }
        return 0;  
    };

    double lo = 0.0, hi = 1e9, mid;  
    double eps = 1e-7;               
    double ans = -1;
    
    while (hi - lo > eps) {
        mid = lo + (hi - lo) / 2.0;
        int res = check(mid);
        
        if (res == 0) {
            ans = mid;    
            hi = mid;     
        } else if (res < 0) {
            hi = mid;    
        } else {
            lo = mid;     
        }
    }

    
    if (ans == -1) {
        cout << "-1" << endl;
    } else {
        cout << fixed << setprecision(6) << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    
    for (int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
