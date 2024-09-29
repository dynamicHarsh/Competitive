#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--) {
        lli n;
        cin >> n;

        auto query = [&](const string tmp) -> bool {
            cout << "? " << tmp << endl;
            lli verdict;
            cin >> verdict;
            if (verdict == -1) exit(0);  
            return verdict;
        };
 
        string ans = "";
 
        
        while (ans.length() < n) {
            if (query(ans + "0")) {
                ans += "0";
                continue;
            } else {
                ans += "1";
                continue;
            }
            break;
        }
 
        
        while (ans.length() < n) {
            if (query("0" + ans)) {
                ans = "0" + ans;
                continue;
            } else {
                ans = "1" + ans;
                continue;
            }
            break;
        }
 
        
        cout << "! " << ans << endl;
    }

    return 0;
}
