#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    ll w,h,n;
    cin>>w>>h>>n;
    set<ll> horiz,vert;
    horiz.insert(0),horiz.insert(h),vert.insert(0),vert.insert(w);
    map<ll,ll> mh,mv;
    mh[h]=1,mv[w]=1;

    while(n--){
        char ch;
        ll value;
        cin>>ch>>value;
        if(ch=='H'){
            auto it=horiz.lower_bound(value);
            ll x=*it;
            it--;
            ll y=*it;
            ll rem=abs(x-y);
            mh[rem]--;
            if(mh[rem]==0) mh.erase(rem);
            horiz.insert(value);
            mh[abs(value-y)]++;
            mh[abs(x-value)]++;
        }
        else{
            auto it=vert.lower_bound(value);
            int x=*it;
            it--;
            ll y=*it;
            ll rem=abs(x-y);
            mv[rem]--;
            if(mv[rem]==0) mv.erase(rem);
            vert.insert(value);
            mv[abs(value-y)]++;
            mv[abs(x-value)]++;
        }
        cout<<mh.rbegin()->first*mv.rbegin()->first<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}