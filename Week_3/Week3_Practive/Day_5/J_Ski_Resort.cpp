#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<ll> 
#define in_range(i,s,n) for(int i=s; i<=n; i++)
#define in_range_back(i,s,n) for(int i=n-1; i >= s; i--)
#define take_array(v,n) in_range(i,0,n) cin>>v[i]
#define print_array(v) for(auto c:v){cout<<c<<" ";}cout<<ln
#define erase_duplicates(x) x.erase(unique(all(x)),x.end());
#define cin2(a, b) cin >> a >> b;
#define cin3(a, b, c) cin >> a >> b >> c;
#define all(x) x.begin(),x.end()
#define all_0(x) memset(x,0,sizeof(x))
#define isEven(x) (x%2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"
#define ln '\n'
#define PQ priority_queue
#define Hashmap unordered_map
#define pb push_back
#define e4 int main()
#define checkmate return 0;
 
using namespace std;
ll slove()
{
    ll n, k, q; cin3(n, k, q);
    vec v(n); take_array(v, n - 1);

    ll l = 0, r = 0, cnt = 0;

    multiset<ll> ml;
    vec save;

    while(r<n)
    {
        ml.insert(v[r]);
        if(r-l+1 < k)r++;
        else 
        {
            ll maxi = *ml.rbegin();
            if(maxi <=q) cnt++;
            else 
            {
                save.pb(cnt);
                cnt = 0;
            }
            auto it = ml.find(v[l]);
            ml.erase(it);
            l++;
            r++;
        }
    }
    save.pb(cnt);
    ll ans = 0;
    for(auto c:save) ans += ((c * (c + 1)) / 2);
    return ans;
}
e4
{
  /* _Coder   : anmamun0
     _Created : 04 April 2024 ||  14:13:21
     _File    : J_Ski_Resort.cpp

    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        cout << slove() << ln;
    }

    checkmate;
}