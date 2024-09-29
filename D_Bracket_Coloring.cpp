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
    int c=0;
    int color=1;
    vector<int> ans;
    int cnt2=0,cnt1=0;
    for(int i=0;i<n;i++){
        char ch=s[i];
        if(ch=='('){
            c++;
        }
        else{
            c--;
        }
        if(c<0){
            color=2;
           
        }
        if(c>0){
            color=1;
            
        }
        if(color==1){cnt1++;}
        else{cnt2++;}
        ans.push_back(color);
    }
    if(c==0){
        if(cnt2==n || cnt1==n){
            cout<<"1"<<endl;
            for(int i=0;i<n;i++){
                cout<<"1 ";
            }
            cout<<endl;
        }
        else{
            cout<<"2"<<endl;
            for(auto x: ans){
            cout<<x<<" ";
        }
        cout<<endl;
        }
        
    }
    else{
        cout<<"-1"<<endl;
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