#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<ll> 
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
void slove()
{
    ll n, k;       cin2(n,k);

    vec v(n);       take_array(v, n - 1);

    ll i = 0, j = n - 1;

    while (i <= j and k > 0)
    {
        if (v[i] == 0) i++;
        else if (v[j] == 0) j--;
        else
        {
            int west = min(v[i], k);
            v[i] -= west;
            k -= west;

            if (i != j)
            {
                west = min(v[j], k);
                v[j] -= west;
                k -= west;
            }
        }
    }

    int down = 0;
    for(auto c:v)if(c==0)down++;
    cout << down << ln;
 
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 08 April 2024 ||  21:17:45
     _File    : C_Inhabitant_of_the_Deep_Sea.cpp

    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        slove();
    }

    checkmate;
}