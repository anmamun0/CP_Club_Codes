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
     _Created : 03 June 2024 ||  21:13:39
     _File    : B_Choosing_Cubes.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;      cin >> T;
    while(T--)
    {
        int n, f, k;        cin3(n,f,k);
        vi v(n); take_array(v,n-1);

        int fev = v[f - 1];
        sort(all(v), greater<int>());


        
        bool front = false;
        for (int i = 0; i<k; i++)
        {
            if (v[i] == fev)
            {
                front = true; break;
            }
        }
        while(k--) v.erase(v.begin());

        bool after = false;
        for (int i = 0; i<v.size(); i++)
        {
            if(v[i]==fev)
            {
                after = true; break;
            }
        }

        if(front)
        {
            if(after) cout << "MAYBE\n";
            else yes;
        }   else no; 
    }

    checkmate;
}