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




int compute(int n, vector<vector<int>> &grid, int sx, int sy, int dx, int dy) {
    int dirx[8]={-1,-1,-1,0,1,1,1,0};
    int diry[8]={-1,0,1,1,1,0,-1,-1};
    
    auto count = [&](int r, int c, vector<vector<int>> &g) {
        int cnt = 0;
        for(int i=0;i<8;i++) {
            int nr = r + dirx[i], nc = c + diry[i];
            if(nr==0 && nc==0) continue;
            if (nr >= 0 && nr < n && nc >= 0 && nc < n && g[nr][nc] == 1)
                cnt++;
        }
        return cnt;
    };
    
    auto spread = [&](vector<vector<int>> &cur) {
        vector<vector<int>> next = cur;
        for (int r = 0; r < n; r++)
            for (int c = 0; c < n; c++) {
                int cnt = count(r, c, cur);
                if (cur[r][c] == 0 && cnt == 3)
                    next[r][c] = 1;
                else if (cur[r][c] == 1 && (cnt < 2 || cnt > 3))
                    next[r][c] = 0;
            }
        return next;
    };
    
    queue<tuple<int, int, vector<vector<int>>, int>> q;
    set<tuple<int, int, vector<vector<int>>>> vis;
    
    q.push({sx, sy, grid, 0});
    
    while (!q.empty()) {
        auto [r, c, cur, days] = q.front();
        q.pop();
        
        if (r == dx && c == dy)
            return days;
        
        auto key = make_tuple(r, c, cur);
        if (vis.count(key))
            continue;
        vis.insert(key);
        
        vector<vector<int>> next = spread(cur);
        
        for (const auto &[dr, dc] : vector<pair<int, int>>{{0, 0}, {-1, 0}, {1, 0}, {0, -1}, {0, 1}}) {
            int nr = r + dr, nc = c + dc;
            
            if (nr >= 0 && nr < n &&
                nc >= 0 && nc < n &&
                next[nr][nc] == 0)
                q.push({nr, nc, next, days + 1});
        }
    }
    
    return -1;
}




void solve() {
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    int drow = -1, dcol = -1, hrow = -1, hcol = -1;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            char ch;
            cin >> ch;
            if (ch == 's')
            {
                drow = i;
                dcol = j;
                grid[i][j] = 0;
            }
            else if (ch == 'd')
            {
                hrow = i;
                hcol = j;
                grid[i][j] = 0;
            }
            else
            {
                grid[i][j] = ch - '0';
            }
        }
    int ans=compute(n, grid, drow, dcol, hrow, hcol)+1;
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}