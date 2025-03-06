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
    int n=s.length();
    for(int i=0;i<n;i++){
        int dig=s[i]-'0';
        for(int j=max(0,i-dig-1);j<i;j++){
            int d=s[j]-'0';
            if((dig-(i-j))>d){
                
                char temp=s[j];
                for(int k=j+1;k<=i;k++){
                    char t=s[k];
                    s[k]=temp;
                    temp=t;
                }
                s[j]=(dig-(i-j)+'0');
                break;
            }
        }
        // cout<<s<<endl;
    }
    // cout<<endl;
    cout<<s<<endl;
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