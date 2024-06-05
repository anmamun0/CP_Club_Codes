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
     _Created : 04 June 2024 ||  23:49:02
     _File    : B_Sum_of_Three_Values.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;   cin2(n,x);
    vl v(n);     
    map<ll, vi> mp;
    in_range(i,0,n-1)
    {
        cin >> v[i];
        mp[v[i]].pb(i);
    }

    vi ans; 

    for (int i = 0;i <n; i++)
    {
        for (int j = i + 1;j <n; j++)
        { 
            ll z = x - v[i] - v[j]; 
            if(z>0 and mp.find(z) != mp.end())
            {
                if(mp[z].back() !=i and mp[z].back()!=j)
                {
                    ans = {i + 1, j + 1, mp[z].back()+1};
                    break;
                }
            }
        }
    }
    if(ans.empty())
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    sort(all(ans));
    print_array(ans);

    checkmate;
}