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
    if(n==1){
        cout<<"1"<<endl;
        cout<<"1"<<endl;
    }
    else if(n==2){
        cout<<"2"<<endl;
        cout<<"1 2"<<endl;
    }
    else if(n==3){
        cout<<"2"<<endl;
        cout<<"1 2 2"<<endl;
    }
    else if(n==4){
        cout<<"3"<<endl;
        cout<<"1 2 2 3"<<endl;
    }
    else if(n==5){
        cout<<"3"<<endl;
        cout<<"1 2 2 3 1"<<endl;
    }
    else{
        cout<<4<<endl;
        for(int i=0;i<n;i++){
            cout<<i%4+1<<" ";
        }
        cout<<endl;
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