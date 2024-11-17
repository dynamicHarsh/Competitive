#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void printeven(int n){
    int num=14;
            while(n>0){
                cout<<num<<" "<<num<<" ";
                n-=2;
                num++;
            }
}

void solve(){
    int n;
    cin>>n;
    
    if(n%2==1 && n<27) cout<<"-1"<<endl;
    else{
        
        if(n%2==0){
            printeven(n);
        } 
        else{
            int a[27]={1,2,2,3,3,4,4,5,5,1,6,6,7,7,8,8,9,9,10,10,11,11,13,12,12,1,13};
            for(auto x: a){
                cout<<x<<" ";
            }
            printeven(n-27);
        }
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