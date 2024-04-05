#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
void solve(){
    string time;
    cin>>time;
    string day;
    int hour=stoi(time.substr(0,2));
    if(hour==0){
        hour=12;
        day="AM";
    }
    else if(hour==12){
        day="PM";
    }
    else{
        if(hour<12){
            day="AM";
        }
        else{
            day="PM";
            hour=hour%12;
        }
       
    }
    if(hour<10){
        cout<<"0"<<hour<<":";
    }
    else{
        cout<<hour<<":";
    }
    cout<<time.substr(3)<<" "<<day<<endl;
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