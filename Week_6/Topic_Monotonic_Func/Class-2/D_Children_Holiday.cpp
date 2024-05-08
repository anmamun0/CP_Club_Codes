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
     _Created : 08 May 2024 ||  13:05:01
     _File    : D_Children_Holiday.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;       cin2(m,n);
    vector<tuple<int, int, int>> v(n);
    for (int i = 0; i<n; i++)
    {
        int t, z, y;    cin3(t, z, y);
        v[i] =  make_tuple(t, z, y);
    }

    vector<int> can(n);
    auto ok = [&](int mid)
    {
        vector<int> may(n);
        int has = m;
        for (int i = 0; i < n; i++)
        {
            tuple<int, int, int> T = v[i];
            int t, z, y, total, can, remaining, curr;

            t = get<0>(T), z = get<1>(T),  y = get<2>(T);

            total = ((t * z) + y);
            can = (mid / total);
            remaining = mid % total;
            curr = ((can * z) + min(z, (remaining / t)));
            curr = min(has, curr);
            has -= curr;
            may[i] = curr;
        }
        if(!has)
            for (int i = 0; i < n;i++) can[i] = may[i];
        
        return (!has);
    };

    int l = 0, r = 1e8, ans;
    while(l<=r)
    {
        int mid = l + (r - l) / 2;
        if(ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid+1;
    }

    cout << ans << "\n";
    for(auto c:can)cout<<c<<" ";
    enter;

    checkmate;
}