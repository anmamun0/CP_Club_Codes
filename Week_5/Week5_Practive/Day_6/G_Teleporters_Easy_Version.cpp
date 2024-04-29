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
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first + a.second < b.first + b.second;
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 28 April 2024 ||  22:30:00
     _File    : G_Teleporters_Easy_Version.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin >> t;
    while (t--)
    {
        ll n, c;        cin2(n,c);
        vector<pair<ll, ll>> v(n + 1);

        in_range(i, 1, n)
        {
            ll val; cin >> val;
            v[i] = {val, i}; 
        }
        sort(all(v), cmp);

        ll sum = 0, cnt = 0;
        in_range(i, 1, n)
        {
            sum += v[i].first + v[i].second;
            if (sum <= c) cnt++;
        }

        cout << cnt << '\n';
    }

    checkmate;
}
