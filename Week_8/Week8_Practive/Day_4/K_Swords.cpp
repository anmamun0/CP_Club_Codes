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
     _Created : 01 June 2024 ||  00:28:33
     _File    : K_Swords.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;      cin >> n;
    vl v(n);
    ll mx = 0;
    in_range(i,0,n-1)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
    }

    vl ex;
    ll total_miss = 0;
    for (int i = 0; i<n; i++)
    {
        ll subs = mx - v[i];
        total_miss += subs;
        if(subs >0)ex.pb(subs);
    }

    if (ex.size() == 1) 
    {
        cout << 1 << " " << total_miss << endl;
        return 0;
    }
   
    // Compute the GCD of all elements in ex
    ll gcd_val = ex[0];
    for (int i = 1; i < ex.size(); i++) 
    {
        gcd_val = __gcd(gcd_val, ex[i]);
    }

    ll z = gcd_val;
    ll y = total_miss / z;

    cout << y << " " << z << "\n";

    checkmate;
}