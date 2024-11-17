#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Compare {
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
        
        if (p1.first == p2.first)
            return p1.second > p2.second;  
        return p1.first < p2.first;  
    }
};

int main() {
    
    priority_queue<pair<int, int>, vector<pair<int, int>>,Compare> pq;

   int q;
   cin>>q;
   int cnt=1;
   int next=1;
   vector<bool> vis(500005,false);
   while(q--){
    int type;
    cin>>type;
    if(type==1){
        int priority;
        cin>>priority;
        pq.push({priority,cnt});
        cnt++;
    }

    else if(type==2){
        while(vis[next]) next++;
        vis[next]=true;
        cout<<next<<" ";
        next++;
    }
    else{
        while(vis[pq.top().second]) pq.pop();
        cout<<pq.top().second<<" ";
        vis[pq.top().second]=true;
        pq.pop();
    }

    


   }
   


    return 0;
}
