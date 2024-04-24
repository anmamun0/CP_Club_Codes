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
     _Created : 23 April 2024 ||  16:28:51
     _File    : H_Negatives_and_Positives.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--)
    {
        int n;      cin>>n;
        vl v(n);    take_array(v,n-1);
        sort(all(v));

        for (ll i = 0; i<n-1; i++)
        {
            if ((v[i] <= 0 and v[i + 1] <= 0) || (v[i] < abs(v[i + 1]) and v[i + 1] < 0) || (v[i] < 0 and abs(v[i]) > v[i + 1]))
            {
                v[i] *= -1;
                v[i + 1] *= -1;
            }
        }

        ll allsum = 0;
        for(auto c:v) allsum += c;
        cout << allsum << endl;
    }

    checkmate;
}