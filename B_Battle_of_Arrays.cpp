#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve() {
    int n,m;
    cin>>n>>m;
    
    
    priority_queue<int> a,b;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push(x);
    }
    for(int i=0;i<m;i++){
        cin>>x;
        b.push(x);
    }

    bool alice_turn =true;
    while(a.size()>0 && b.size()>0){
        if(alice_turn){
            int y=b.top();
            x=a.top();
            b.pop();
            if(y>x){
                b.push(y-x);
            }
            alice_turn=false;
        }
        else{
            int y=a.top();
            x=b.top();
            a.pop();
            if(y>x){
                a.push(y-x);
            }
            alice_turn=true;
        }
    }

    if(a.size()==0){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
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