#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    
    string s;
    cin>>s;
    int ones=0,zeroes=0;
    int n=s.length();
    vector<int> one_pos;
    one_pos.push_back(0);
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            one_pos.pb(i);
            ones++;
        }
        else zeroes++;
    }
    one_pos.push_back(n);
    int sz=ones;

    auto check=[&](int mid)->bool{
        if(mid>=ones) return true;
        int ans=INT_MAX;
        
        for(int i=mid,j=0;i>=0;i--,j++){
            ans=min(ans,max(abs(one_pos[sz-j]-one_pos[i+1])-1,mid));
        }
        cout<<"mid="<<mid<<" ans="<<ans<<endl;
        return ans<=mid;
    };


    int lo=0,hi=max(ones,zeroes);
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(check(mid)){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    cout<<lo<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}