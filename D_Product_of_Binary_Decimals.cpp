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
    int arr[]={10,11,100,101,110,111,1100,1101,1110,1111,1000,1001,1010,1011,10100,10101,10110,10111,10000,10001,10010,10011,11100,11101,11110,11111,11000,11001,11010,11011,100000};
    bool flag=false,found=false;
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    for(auto x: arr){
        if(x==n){
            cout<<"YES"<<endl;
            return;
        }
    }
    while(n>1){
        flag=false;
        for(auto x: arr){
            
            if(n%x==0){
                
                flag=true;
                n=n/x;
                if(n==1){
                    found=true;
                }
                break;
            }
            
            
        }
        if(flag==false || found==true){
                break;
            }
        
    }
    cout<<(found?"YES":"NO")<<endl;
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