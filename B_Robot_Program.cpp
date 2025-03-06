#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    uint64_t n,pos,time;
    cin>>n>>pos>>time;
    string s;
    cin>>s;
    int effect=0;
    uint64_t ans=0;
    for(int i=0;i<n;i++){
        char ch=s[i];
        if(ch=='L') effect--;
        else effect++;
        if(effect==-1*pos){
            ans+=1;
            time-=(i+1);
            break;
        }
    }
    if(time>=0 && ans==1){
        int eff=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='L') eff--;
            else eff++;
            if(eff==0){
                ans+=(time/(i+1));
                cout<<ans<<endl;
                return;
            }
        }
        cout<<ans<<endl;
        
    }
    else{
        cout<<"0"<<endl;
    }


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