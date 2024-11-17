#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    int n,d,l;
    cin>>n>>d>>l;
    int left=n-l;
    int mini=0,maxi=0;
    if(left>=1){
        mini=2;
        maxi=2;
    }
    
    left--;
    if(left>0){
        maxi+=left;
        while(left>0){
            
            if(left<l && left%l==1){
                mini+=1;
            }
            else{
                mini+=2;
            }
            left-=l;
        }
    }
    // cout<<mini<<" "<<maxi<<endl;

    if(d<mini || d>maxi) cout<<"-1"<<endl;
    else{
        int now=1,next=2;
        int cnt=0;
        for(int i=0;i<d/2;i++){
            cout<<now<<" "<<next<<endl;
            now=next;
            next++;
            cnt++;
        }
        now=1;
        for(int i=0;i<(d+1)/2;i++){
            cout<<now<<" "<<next<<endl;
            now=next;
            next++;
            cnt++;
        }
        now=1;
        for(int i=0;i<l-2;i++){
            cout<<now<<" "<<next<<endl;
            
            next++;
            cnt++;
        }
        now=next-1;
        for(int i=cnt;i<n-1;i++){
            cout<<"3 "<<next<<endl;
            next++;
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