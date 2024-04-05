#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

vector<int> findFactors(int num) {
    std::vector<int> factors;
    int sqrtNum = sqrt(num);
    
    for (int i = 1; i <= sqrtNum; ++i) {
        if (num % i == 0) {
            factors.push_back(i);
            if (i != num / i) { 
                factors.push_back(num / i);
            }
        }
    }
    
    return factors;
}
string findPattern(string s, int x){
    string a="",b="",c="";
        for(int i=0;i<x;i++){
            a+=s[i];
        }
        
            for(int i=x;i<2*x;i++){
            b+=s[i];
            }
        
        for(int i=2*x;i<3*x;i++){
            c+=s[i];
        }
    if(a==b){
        return a;
    }
    else if(b==c){
        return c;
    }
    else if( a==c){
        return a;
    }
    else {
        return "NO";
    }
        
    }

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> factors=findFactors(n);
    sort(factors.begin(),factors.end());
    
    bool diff=false,flag=false;
    int prev=n,prev2=n;
    string pattern;
    int ans=INT_MAX;
    for(auto x: factors){
        flag=false;
        diff=false;
        if(s.length()>=3*x){
            pattern=findPattern(s,x);
        }
        else{
            pattern=s.substr(0,x);
        }
        if(pattern=="NO"){
            continue;
        }
        // cout<<pattern<<endl;
        
        for(int i=0;i<n;i++){
            if(s[i]==pattern[i%x]){
                continue;
            }
            else{
                if(!diff){
                    diff=true;
                }
                else{
                    flag=true;
                    break;
                }
            }
        }
        if(!flag){
            prev=x;
        }
        
        
	
        // flag=false;
        // diff=false;
        // for(int i=0;i<n;i++){
        //     if(s[n-i-1]==s[n-1+(n-i-1)%x]){
        //         continue;
        //     }
        //     else{
        //         if(!diff){
        //             diff=true;
        //         }
        //         else{
        //             flag=true;
        //             break;
        //         }
        //     }
        // }
        // if(!flag){
        //     prev2=x;
        // }
        int mini=min(prev,prev2);
        // cout<<"mini"<<mini<<endl;
        ans=min(ans,mini);
        if(ans!=n){
            break;
        }
    }
     
        
    ans=min(n,ans);
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
