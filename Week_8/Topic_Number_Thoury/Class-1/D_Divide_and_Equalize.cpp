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
     _Created : 26 May 2024 ||  18:18:23
     _File    : D_Divide_and_Equalize.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;          cin >> T; 
    while(T--)
    {
        int n;      cin >> n;
        vi v(n);    take_array(v,n-1);

        map<int, int> cnt;
        for (int i = 0; i < n;i++)
        {
            for (int j = 2; j * j <= v[i]; j++)
            {
                if(v[i]%j==0)
                {
                    while(v[i]%j==0)
                    {
                        cnt[j]++;
                        v[i] /= j;
                    }
                }
            }
            if(v[i] >1)cnt[v[i]]++;
        }

        bool ok = true;
        for(auto c:cnt)
        {
            if(c.second % n != 0)
            {
                ok = false; break;
            }
        }
        (ok) ? yes : no;
    }

    checkmate;
}

// https://codeforces.com/contest/1881/problem/D