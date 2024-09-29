#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

int nums[]={4,8,15,16,23,42};

bool partOf(int bc,int i,int j){
    int x=bc/nums[i];
    for(auto n: nums){
        if(n==x && n!=nums[i] && n!=nums[j]) return true;
    }
    return false;
}

void add(int ab,int bc,vector<int> &ans){
    int i,j;
    bool f=false;
    for(i=0;i<5;i++){
        for(j=i+1;j<6;j++){
            if(nums[i]*nums[j]==ab){
                f=true;
                break;
            }
        }
        if(f) break;
    }
    
    if(partOf(bc,i,j) && bc%nums[i]==0){
        swap(i,j);
    }
    ans.push_back(nums[i]);
        ans.push_back(nums[j]);
        ans.push_back(bc/nums[j]);
    
}

void solve(){
    int a,b,c,ab,bc;
    cout<<"? 1 2"<<endl;
    cout << flush;
    cin>>ab;
    cout<<"? 2 3"<<endl;
    cout << flush;
    cin>>bc;
    
    vector<int> ans;
    add(ab,bc,ans);
    cout<<"? 4 5"<<endl;
    cout << flush;
    cin>>ab;
    cout<<"? 5 6"<<endl;
    cout << flush;
    cin>>bc;
    add(ab,bc,ans);
    cout<<"!";
    cout << flush;
    for(auto x: ans){
        cout<<" "<<x;
        cout << flush;
    }
    cout<<endl;
    cout << flush;

}
 
int main(){
    ios::sync_with_stdio(false);
      cin.tie(0);
 
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
    return 0;
}