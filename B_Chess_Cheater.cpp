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
    string s;
    cin>>s;
    int cnt=0;
    int score=0;
    vector<int> inter;
    int beg=0;
    while(s[beg]!='W') beg++;
    for(int i=beg;i<n;i++){
        if(s[i]=='W'){
            if(cnt>0) inter.push_back(cnt);
            cnt=0;
            score+=1+(i>0 && s[i-1]=='W');
        }
        else{
            cnt++;
        }
    }
    if(score==0){
        score=2*min(k,n)-1;
        cout<<max(score,0)<<endl;return;
    } 
    sort(inter.begin(),inter.end());

    
    // cout<<score<<endl;
    for(auto x: inter){
        // cout<<x<<" ";
        score+=(2*min(k,x))+ (x<=k);
        k-=x;
        if(k<=0) break;
        
    }
    // cout<<endl;
    

   
    if(k>0){
        score+=min(cnt,k)*2;
        k-=cnt;
    }
    if(k>0){
        score+=min(k,beg)*2;
    }

    cout<<score<<endl;
    
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