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
     _Created : 18 April 2024 ||  22:00:33
     _File    : lower_bound_Searching.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, key;     cin2(n, key);
    vi v(n);        take_array(v, n - 1);
    
    int l = 0, r = n - 1, mid, ans = -1;

    while(l<=r)
    {
        mid = (l + r) / 2;

        if(key == v[mid])
        {
            ans = mid;
            l = mid + 1;
        }
        else if(key < v[mid])  r = mid-1;
        else l = mid + 1;
    }

    cout << ans << '\n';

    // Buildin Function Upper Bound;
    auto it = upper_bound(all(v), 8);
    cout << it-v.begin() << endl;
    /*
    for index = it-v.begin();
    for value = *it;
    */

    checkmate;
}

/*
12 11
4 8 11 11 11 11 11 15 15 20 21 25

ans = 6;
*/