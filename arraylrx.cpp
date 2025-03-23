#include <bits/stdc++.h>
using namespace std;

class SegmentTree {
private:
    vector<int> tree;
    vector<int> arr;
    int n;

    void build(int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start];
            return;
        }
        int mid = (start + end) / 2;
        build(2 * node + 1, start, mid);
        build(2 * node + 2, mid + 1, end);
        tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
    }

    void update(int node, int start, int end, int idx, int val) {
        if (start == end) {
            arr[idx] = val;
            tree[node] = val;
            return;
        }
        int mid = (start + end) / 2;
        if (start <= idx && idx <= mid)
            update(2 * node + 1, start, mid, idx, val);
        else
            update(2 * node + 2, mid + 1, end, idx, val);
        tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
    }

    int queryMin(int node, int start, int end, int l, int r) {
        if (r < start || end < l)
            return INT_MAX;
        if (l <= start && end <= r)
            return tree[node];
        int mid = (start + end) / 2;
        int left = queryMin(2 * node + 1, start, mid, l, r);
        int right = queryMin(2 * node + 2, mid + 1, end, l, r);
        return min(left, right);
    }

public:
    SegmentTree(vector<int>& input) {
        arr = input;
        n = input.size();
        tree.resize(4 * n); // 4n size for safety
        build(0, 0, n - 1);
    }

    void update(int idx, int val) {
        update(0, 0, n - 1, idx, val);
    }

    int queryMin(int l, int r) {
        return queryMin(0, 0, n - 1, l, r);
    }

    int getValue(int idx) {
        return arr[idx];
    }
};

int findFirstLeq(SegmentTree& segTree, int l, int r, int x) {
    if (segTree.queryMin(l, r) > x)
        return -1;
    
    int left = l, right = r;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (segTree.queryMin(l, mid) <= x)
            right = mid;
        else
            left = mid + 1;
    }
    return (segTree.getValue(left) <= x) ? left : -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    SegmentTree segTree(arr);
    int q;
    cin>>q;
    while (q--) {
        int l, r, x;
        cin>>l>>r>>x;
        if (x == 0) { // Update query: L X
            x=r;
            --l;
            segTree.update(l, x); // 0-based indexing
        } else { // Range query: L R X
            --l,--r;
            int result = findFirstLeq(segTree, l, r, x);
            cout << result+1 << "\n";
        }
    }

    return 0;
}