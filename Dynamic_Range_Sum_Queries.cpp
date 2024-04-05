#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
const ll mod=1e9+7;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
// Segment Tree Starts
vector<ll> segTree;
ll neutral=0;
ll merge(ll left,ll right){
    return left+right;
}
void build(vector<ll> &arr,int start,int end,int index){
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
void update(vector<ll> &arr,int start,int end, int index,int pos,int val){
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
ll query(int start,int end,int index,int l,int r){
    if(start>=l && end<=r){
        return segTree[index];
    }
    else if(end<l || r<start){
        return neutral;
    }
    int mid=(start+end)/2;
    ll leftAns=query(start,mid,2*index,l,r);
    ll rightAns=query(mid+1,end,2*index+1,l,r);
    return merge(leftAns,rightAns);
}
// Segment Tree ends
void solve(){
    int n,q;
    cin>>n>>q;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    segTree.resize(4*n-1);
    build(arr,0,n-1,1);
    while(q--){
        int type,a,b;
        cin>>type>>a>>b;
        if(type==1){
            update(arr,0,n-1,1,a-1,b);
        }
        else{
            cout<<query(0,n-1,1,a-1,b-1)<<endl;
        }
    }


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