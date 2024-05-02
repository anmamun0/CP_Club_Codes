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
     _Created : 02 May 2024 ||  22:32:49
     _File    : C_Assembly_via_Remainders.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t; 
    while (t--) 
    {
        ll n; cin >> n; 
        vl x(n-1);
        ll mx = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            cin >> x[i];
            mx = max(x[i], mx);
        }
        mx++;

        vl a(n); a[0] = mx;

        for (ll i = 1;i <n; i++) a[i] = a[i - 1] + x[i - 1];
        print_array(a);
    }

    checkmate;
}