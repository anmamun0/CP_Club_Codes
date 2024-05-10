#include <bits/stdc++.h>
typedef long long ll;
#define vl vector<ll> 
#define vi vector<int> 
#define in_range(i,s,n) for(int i=s; i<=n; i++)
#define in_range(i,s,n) for(int i=s; i<=n; i++)
#define in_range_back(i,s,n) for(int i=n ; i >= s; i--)
#define take_array(v,n) in_range(i,0,n) cin>>v[i]
#define print_array(v) for(auto c:v){cout<<c<<" ";}cout<<ln
#define erase_duplicates(x) x.erase(unique(all(x)),x.end());
#define cin2(a, b) cin >> a >> b;
#define cin3(a, b, c) cin >> a >> b >> c;
#define all(x) x.begin(),x.end()
#define all_0(x) memset(x,0,sizeof(x))
#define isEven(x) ((x&1)== 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"
#define ln '\n'
#define PQ priority_queue
#define Hashmap unordered_map
#define pb push_back
#define gcC int main()
#define checkmate return 0;
 
using namespace std;
// using namespace __gnu_pbds;
 
gcC
{
  /* _Coder   : anmamun0
     _Created : 06 May 2024 ||  18:26:18
     _File    : F_Number_Game.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;      cin>>t;
    while(t--)
    {
        int n;      cin >> n;
        vi v(n);    take_array(v,n-1);

        auto ok = [&](int k) -> bool
        {
            multiset<int> ml; for (auto c : v) ml.insert(c);

            for (int i = 1; i <= k; i++)
            {
                if (ml.empty()) return false;

                int req = k - i + 1;
                auto it = ml.upper_bound(req);
                if (it == ml.begin()) return false;
                it--;
                ml.erase(it);

                // Bob move
                if (!ml.empty())
                {
                    ll a = (*ml.begin()) + req;
                    ml.erase(ml.begin());
                    ml.insert(a);
                }
            }
        };

        ll l = 0, r = n, ans = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if(ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else r = mid -1;
        }
        cout << ans << endl;
    }

    checkmate;
}
