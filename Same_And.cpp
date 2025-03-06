
#include <bits/stdc++.h>
using namespace std;

void f(long long num,long long maxi) {
    vector<int> zeroPositions;
    int temp = num, pos = 0, len;
    len=((maxi == 0) ? 1 : (int)(log2(maxi)) + 1);
    
    while (pos < len) { 
    if ((num & (1 << pos)) == 0) { 
        zeroPositions.push_back(pos);
    }
    pos++;
    }
    set<int> uniqueNumbers;
    
    for(auto x: zeroPositions){
        long long calc=num+pow(2,x);
        if(calc<=maxi){
            uniqueNumbers.insert(calc);
        }
    }
    
    
    
    // Print unique numbers
    int k=uniqueNumbers.size()+1;
    if(k==1){
        cout<<"-1"<<endl;
        return;
    }
    cout<<k<<endl;
    for (int n : uniqueNumbers) {
       cout<<n<<" ";
    }
    cout<<num<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    long long n,m;
    cin>>n>>m;
    f(n,m);
    }

    
    return 0;
}
