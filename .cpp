#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
vector<int> segTree;
int neutral=INT_MAX;
int merge(int left,int right){
    return min(left,right);
}
void build(vector<int> arr,int start,int end,int index){
    if(start==end){
        segTree[index]=arr[start];
        return;
    }
    int mid=(start+end)/2;
    int left=2*index;
    int right=2*index+1;
    build(arr,start,mid,left);
    build(arr,mid+1,end,right);
    segTree[index]=merge(segTree[left],segTree[right]);
}
void update(vector<int> arr,int start,int end, int index,int pos,int val){
    if(start==end){
        arr[pos]=val;
        segTree[index]=arr[pos];
        return;
    }
    int mid=(start+end)/2;
    if(pos<=mid){
        update(arr,start,mid,2*index,pos,val);
    }
    else{
        update(arr,mid+1,end,2*index+1,pos,val);
    }
    segTree[index]=merge(segTree[2*index],segTree[2*index+1]);
}
int query(int start,int end,int index,int l,int r){
    if(start>=l && end<=r){
        return segTree[index];
    }
    else if(end<l || r<start){
        return neutral;
    }
    int mid=(start+end)/2;
    int leftAns=query(start,mid,2*index,l,r);
    int rightAns=query(mid+1,end,2*index+1,l,r);
    return merge(leftAns,rightAns);
}
void solve(){
    vector<int> arr={1,2,3,4,5,6,7,8};
    int n=arr.size();
    segTree.resize(4*n-1);
    build(arr,0,n-1,1);
    
    cout<<query(0,n-1,1,3,6);

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