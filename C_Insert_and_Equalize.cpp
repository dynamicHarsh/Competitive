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
        int n;
        cin >> n;
        int a[n];
        set<int> st;
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        if(n==1){
            cout<<"1"<<endl;
            return;
        }
        sort(a, a + n);
        
        
     
        
        int x=0;
        for (int i = 1; i < n; i++)
        {
            x=__gcd(x,a[i]-a[i-1]);
        }
        
        
     
                long long res = 0, worst = n;
        for (int i = 0; i < n; i++) {
            res += (a[n - 1] - a[i]) / x;
            if (i + 1 < n && a[i] + x < a[i + 1]) {
                worst = n - i - 1;
            }
        }
 
        cout << res + worst << "\n";
    }
     
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(0);
     
        int t = 1;
        cin >> t;
        while (t--)
        {
            solve();
        }
        return 0;
    }