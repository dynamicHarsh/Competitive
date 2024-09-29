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
    vector<int> a(4);
    for(int i=0;i<n;i++){
        if(s[i]=='N') a[0]++;
        else if(s[i]=='S') a[1]++;
        else if(s[i]=='E') a[2]++;
        else a[3]++;
    }
    // cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
    
    int mini1=min(a[0],a[1]);
    int mini2=min(a[2],a[3]);
    a[0]-=mini1,a[1]-=mini1,a[2]-=mini2,a[3]-=mini2;
    if(a[0]&1 || a[1]&1 || a[2]&1 || a[3]&1 || (a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0 && n==2)){
        cout<<"NO"<<endl;
        return;
    }

    string ans="";
    int no=0,so=0,e=0,w=0;
    for(int i=0;i<n;i++){
        if(s[i]=='N'){
            ans+=(no%2==0)?"R":"H";
            no++;
        }
        else if(s[i]=='S'){
            ans+=(so%2==0)?"R":"H";
            so++;
        }
        else if(s[i]=='E'){
            ans+=(e%2==1)?"R":"H";
            e++;
        }
        else{
            ans+=(w%2==1)?"R":"H";
            w++;
        }
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