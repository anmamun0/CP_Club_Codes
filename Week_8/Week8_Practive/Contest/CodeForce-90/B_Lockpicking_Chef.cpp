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
int slove(int n, string k, string s) {
    int moves = 0;
    for (int i = 0; i <= n - k.length(); ++i) {
        if (s.substr(i, k.length()) == k)
            return moves;
        for (int j = 0; j < k.length(); ++j) {
            int d = k[j] - s[i + j];
            s[i + j] += d;
            moves += abs(d);
        }
    }
    return moves;
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 12 May 2024 ||  22:50:35
     _File    : B_Lockpicking_Chef.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--)
    {
        int n, m;       cin2(n ,m );
        string s, key;  cin2(s, key);

        int i = 0;
        cout << slove(n, key, s) << endl;
       

    }

    checkmate;
}