#include <bits/stdc++.h>
using namespace std;

class FenwickTree {
private:
    vector<long long> tree;
    int n;
public:
    FenwickTree(int size) {
        n = size;
        tree.assign(n + 1, 0);
    }
    void add(int index, long long value) {
        while (index <= n) {
            tree[index] += value;
            index += index & -index;
        }
    }
    long long query(int index) {
        long long sum = 0;
        while (index > 0) {
            sum += tree[index];
            index -= index & -index;
        }
        return sum;
    }
};

int main() {
    int N;
    cin >> N;
    vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }
    if (N < 3) {
        cout << 0 << endl;
        return 0;
    }

    // Assign ranks
    vector<int> sorted_h = h;
    sort(sorted_h.begin(), sorted_h.end());
    vector<int> r(N);
    for (int i = 0; i < N; i++) {
        r[i] = lower_bound(sorted_h.begin(), sorted_h.end(), h[i]) - sorted_h.begin() + 1; // 1-based
    }

    // Initialize Fenwick Trees
    FenwickTree ft_left(N + 1);
    FenwickTree ft_right(N + 1);
    vector<long long> left(N, 0), right(N, 0);

    // Left pass: count taller officers before j
    for (int j = 0; j < N; j++) {
        left[j] = ft_left.query(N) - ft_left.query(r[j]); // Sum from r[j]+1 to N
        ft_left.add(r[j], 1);
    }

    // Right pass: count shorter officers after j
    for (int j = N - 1; j >= 0; j--) {
        right[j] = ft_right.query(r[j] - 1); // Sum from 1 to r[j]-1
        ft_right.add(r[j], 1);
    }

    // Compute total ways
    long long ans = 0;
    for (int j = 0; j < N; j++) {
        ans += left[j] * right[j];
    }
    cout << ans << endl;
    return 0;
}