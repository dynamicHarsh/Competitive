#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n;
    cin >> n;
    int num;
    vector<int> unique_vals;
    vector<bool> seen(101, false);

    for(int i = 0; i < n; i++){
        cin >> num;
        if(!seen[num]){
            seen[num] = true;
            unique_vals.push_back(num);
        }
    }

    if(unique_vals.size() == 2 && abs(unique_vals[0] - unique_vals[1]) > 1){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

 
int main(){
    ios::sync_with_stdio(false);
      cin.tie(0);
 
    int t=1;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}