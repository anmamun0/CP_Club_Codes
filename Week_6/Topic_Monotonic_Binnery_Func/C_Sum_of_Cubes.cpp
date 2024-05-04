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
const int maxN = 1e4;
gcC
{
  /* _Coder   : anmamun0
     _Created : 30 April 2024 ||  19:39:33
     _File    : C_Sum_of_Cubes.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vl pw;
    for (int i = 1; i <= maxN; i++) pw.pb(pow(i, 3));
    

    int t; cin >> t;
    while(t--)
    {
        ll x;   cin >> x;
        bool found = false;

        for (int i = 0; i < maxN; i++)
        {
            if(pw[i] >= x)break;

            int l = 0, r = maxN - 1, mid;
            ll need = x - pw[i];

            bool ok = false;

            while(l<=r)
            {
                mid = l + (r - l) / 2;
                if(pw[mid] == need)
                {
                    ok = true;
                    break;
                }
                else if(pw[mid] > need) r = mid - 1;
                else l = mid + 1;
            }

            if(ok)
            {
                 found = true;
                 break;
            }
        }

        (found) ? yes : no;
    }

    checkmate;
}