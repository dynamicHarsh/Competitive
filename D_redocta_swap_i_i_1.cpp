#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    string s;
    cin>>s;
    unordered_map<string,int> mp;
    queue<string> q;
    q.push(s);
    mp[s]=0;
    while(!q.empty()){
        string cur=q.front();
        q.pop();
        if(cur=="atcoder"){
            cout<<mp[cur]<<endl;
            break;
        }
        
        for(int i=1;i<7;i++){
        string next=cur;
        swap(next[i-1],next[i]);
        if(mp.find(next)==mp.end()){
            mp[next]=mp[cur]+1;
            q.push(next);
        }    
        }

    }
}
 
int main(){
    ios::sync_with_stdio(false);
      cin.tie(0);
 
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
    return 0;
}