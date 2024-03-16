#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,k;
    cin>>n>>k;
    map<int,int> a,b;
    int e;
    for(int i=0;i<n;i++){
        cin>>e;
        a[e]++;
    }
    for(int i=0;i<n;i++){
        cin>>e;
        b[e]++;
    }
    vector<int> o1,o2,d1,d2;
    for(auto x: a){
        // cout<<x.first<<"="<<x.second<<endl;
        if(x.second==1){
            o1.push_back(x.first);
        }
        else{
            d1.push_back(x.first);
        }
    }
    // cout<<endl;
    for(auto x: b){
        // cout<<x.first<<"="<<x.second<<endl;
        if(x.second==1){
            o2.push_back(x.first);
        }
        else{
            d2.push_back(x.first);
        }
    }
    
    vector<int> ans1,ans2;
    int sz=2*k;
    for(int i=0;i<d1.size() && sz>0;i++){
        // cout<<"d1[i]="<<d1[i]<<"   d2="<<d2[i]<<endl;
        ans1.push_back(d1[i]);
        ans1.push_back(d1[i]);
        ans2.push_back(d2[i]);
        ans2.push_back(d2[i]);
        sz-=2;
    }
    for(int i=0;i<o1.size() && sz>0;i++){

        ans1.push_back(o1[i]);
        ans2.push_back(o1[i]);
        sz--;
    }
    
    for(auto x: ans1){
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto y: ans2){
        cout<<y<<" ";
    }
    cout<<endl;
    // cout<<endl;



    
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