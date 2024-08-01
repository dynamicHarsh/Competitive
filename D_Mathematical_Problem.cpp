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
    cin>>n;
    string s;
    cin>>s;
    int ans=INT_MAX;
    for(int i=0;i+1<n;i++){
        int sum=0;
        vector<int> vect;
        
        for(int j=0;j<i;j++){
            vect.push_back(s[j]-'0');
        }
        vect.push_back(stoi(s.substr(i,2)));
        for(int j=i+2;j<n;j++){
            vect.push_back(s[j]-'0');
        }
        bool one=false,zero=false;
        for(auto x: vect){
            if(x==0)
            zero=true;
            else if(x==1)
            one=true;
            else
            sum+=x;
            
        }
        
        sum=max(sum,int (one));
        if(zero) ans=0;
        ans=min(ans,sum);
        if(!ans) break;
        
    }
    cout<<ans<<endl;
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