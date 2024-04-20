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
ll lower(vector<ll>&v, ll key)
{
    ll l = 0, r = v.size() - 1, mid, ans = -1;
    while(l<=r)
    {
        mid = l + (r - l) / 2;
        
        if(key <= v[mid])
        {
            ans = mid;
            r = mid - 1;
        }
        else if(key > v[mid]) l = l+1;
        else r = r - 1;
    }

    return ans;
}
ll upper(vector<ll>&v, ll key)
{
    ll l = 0, r = v.size() - 1, mid, ans = -1;
     
    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if(key >= v[mid])
        {
            ans = mid;
            l = mid + 1;
        }
        else if(key > v[mid]) l = mid +1;
        else r = mid -1;
    }

    return ans;
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 20 April 2024 ||  15:33:49
     _File    : D_Fast_search.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;      cin>>n;
    vl v(n);    take_array(v,n-1);
    sort(all(v));

    int t;      cin>>t;
    while(t--)
    {
        ll a, b;       cin2(a,b);
 
        // auto  x = lower_bound(all(v), a);
        // auto y = upper_bound(all(v), b);
        // cout << y-x <<" ";

        int lb = lower(v, a);
        int ub = upper(v, b);
        cout << ub - lb + 1 << " ";
    }

    checkmate;
}