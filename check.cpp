#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

// Function to generate a random number between 1 and n
int getRandom(int n) {
    return rand() % n + 1;
}

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<tuple<int, int, int>> t(k);
    for (int i = 0; i < k; ++i) {
        int l, r, m;
        cin >> l >> r >> m;
        t[i] = {l, r, m};
    }

    // Sort based on m, and if m is equal, by l and r
    sort(t.begin(), t.end(), [](const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
        int l1, r1, m1, l2, r2, m2;
        tie(l1, r1, m1) = a;
        tie(l2, r2, m2) = b;
        return m1 < m2 || (m1 == m2 && (l1 < l2 || (l1 == l2 && r1 < r2)));
    });

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }
    
    bool flag = false;

    // Process each query
    for (const auto &[l, r, m] : t) {
        int min_val = *min_element(arr.begin() + l - 1, arr.begin() + r);

        if (min_val == m) {
            // Modify the array only if min_val is equal to m
            bool modified = false;
            for (int i = l - 1; i < r; ++i) {
                if (arr[i] == m) {
                    // Update the element to something else
                    int new_val = (arr[i] % n) + 1;
                    if (new_val == m) {
                        continue; // Don't update if the new value is still m
                    }
                    arr[i] = new_val;
                    modified = true;
                }
            }
            if (!modified) {
                cout << -1 << endl;
                return;
            }
        }

        // After modification, ensure the array is valid
        for (int i = l - 1; i < r; ++i) {
            if (arr[i] == m) {
                cout << -1 << endl;
                return;
            }
        }
    }

    // Final check: ensure no element is equal to m in any range
    for (const auto &[l, r, m] : t) {
        int min_val = *min_element(arr.begin() + l - 1, arr.begin() + r);
        if (min_val == m) {
            cout << -1 << endl;
            return;
        }
    }

    // If no issues, output the modified array
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
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
