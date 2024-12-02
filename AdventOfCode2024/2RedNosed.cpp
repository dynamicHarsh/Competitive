#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    string line;
    ll ans=0;



    while(getline(cin,line)){
        stringstream ss(line);
        vector<int> vec;
        int num;
        while(ss>>num){
            vec.pb(num);
        }
        int len=vec.size();
        bool flag=false;
        if(len==1){ans++;continue;}
        auto check=[&](vector<int> v)->bool{
            bool increasing =true, decreasing=true;
            int n=v.size();
            for(int i=1;i<n;i++){
                int diff=abs(v[i]-v[i-1]);
                if(diff<1 || diff>3) return false;
                if(v[i]>v[i-1]) decreasing=false;
                if(v[i]<v[i-1]) increasing=false;
            }
            return decreasing || increasing;
        };


        
        if(check(vec)) flag=true;
        else{

            for(int i=0;i<len;i++){
                vector<int> temp=vec;
                temp.erase(temp.begin()+i);
                if(check(temp)){
                    flag=true;
                    break;
                }
            }
        }
        if(flag) ans++;

    }
    cout<<ans<<endl;


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