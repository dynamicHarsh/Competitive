#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mod = 1e9 + 7;

#define mp make_pair
#define pb push_back
#define endl "\n"

void solve()
{
  map<string, int> src;
  src["A"] = 1;
  src["B"] = 1;
  map<string, int> dst;
  dst["C"] = 1;
  dst["D"] = 1;
  bool possible=true;
  vector<pair<string, string>> route = {{"A", "W1"}, {"B", "W2"}, {"W3", "C"}, {"W4", "D"}};
  string ist,ien;
  map<string, vector<string>> path;
  for (auto x : route)
  {
    string start = x.first;
    string end = x.second;
    if (src[start] == 1)
    {
      path[end].push_back(start);
    }
    else if ((path[start]).size())
    { if(dst[end]==1){
      path[start].erase(path[start].begin());
    }
    else{
      ist=start;
      ien=end;
      possible=false;
      break;
    }
      
    }
    else
    {
      ist=start;
      ien=end;
      possible=false;
      break;
    }
  }
  if(!possible){
    cout << ist << " " << ien << endl;
      cout << "Invalid Trip" << endl;
      
  }
  else{
    cout << "Valid Trip" << endl;
  }
  
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin>>t;
  while (t--)
  {
    solve();
  }
  return 0;
}