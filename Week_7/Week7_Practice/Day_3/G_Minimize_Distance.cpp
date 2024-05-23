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
     _Created : 23 May 2024 ||  21:31:30
     _File    : G_Minimize_Distance.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;      cin >> T;
    while(T--)
    {
        ll N, K, Mx = 0;   cin >> N >> K;
        vl v, neg; 

        for (int i = 0; i< N; i++)
        {
            ll val;    cin >> val;
            if(val > -1)v.pb(val);
            else
            {
                val *= -1;
                neg.pb(val);
            }
            Mx = max(Mx, val);
        }
        sort(all(v), greater<int>());
        sort(all(neg), greater<int>());

        ll arng = 0;
        for (int i = 0; i < v.size(); i+=K) arng += (v[i] * 2);
        for (int i = 0; i < neg.size(); i+=K) arng += (neg[i] * 2);
        
        arng -= Mx;
        cout << arng << "\n";
    }

    checkmate;
}