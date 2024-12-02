#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int lo=1,hi=n,mid;
    set<char> u;
    for(auto ch: s){
        u.insert(ch);
    }
    int unique=u.size();

    

    auto check=[&](int len)->bool{
        map<char,int> m;

        for(int i=0;i<n;i++){
            if(i-len>=0){
                if(m[s[i-len]]==1) m.erase(s[i-len]);
                else{
                    m[s[i-len]]--;
                }
            }
            m[s[i]]++;
            if(m.size()==unique) return true;
            
            
        }
        return m.size()==unique;
        

    };


    int ans=n;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(check(mid)){
            ans=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }

    cout<<ans<<endl;
    // cout<<countUnique(s.substr(1,5))<<endl;

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