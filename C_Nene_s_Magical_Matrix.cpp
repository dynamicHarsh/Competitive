#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"

void print(int n){
    for(int i=0;i<n;i++){
        cout<<i+1<<" \n"[i==n-1];
    }
}

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> mat(n,vector<int> (n,0));
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            mat[i][j]=(j+1);
            mat[j][i]=(j+1);
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum+=mat[i][j];
        }
        
    }
    cout<<sum<<" "<<2*n<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<"1 "<<i+1<<" ";
        print(n);
        cout<<"2 "<<i+1<<" ";
        print (n);
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