#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"


bool get_bit(int64_t a,int i){
    return a&(1LL<<i);
}

void solve(){
    int64_t a,b,r;
    cin>>a>>b>>r;
    bool flag=true;
    int64_t x=0;
    if(a>b){
        swap(a,b);
    }
    
   
        for(int i=59;i>=0;i--){
            bool bit_a=get_bit(a,i);
            bool bit_b=get_bit(b,i);
            if(bit_a!=bit_b){
                if(flag){
                    flag=false;
                }
                else{
                    if(!bit_a && (x+(1LL<<i))<=r){
                        x+=(1LL<<i);
                        a^=(1LL<<i);
                        b^=(1LL<<i);
                    }
                }
            }
        }
    cout<<b-a<<endl;
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