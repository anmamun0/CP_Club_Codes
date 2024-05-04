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
     _Created : 04 May 2024 ||  15:54:03
     _File    : D_Scuza.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>> t;
    while(t--)
    {
        int n, q;   cin2(n ,q);
        vl v(n);    take_array(v, n - 1);

        // 0 -> ques, 1-> indx, 2 -> ans;
        vector<tuple<ll, int, ll>> Qe;
        for (int i = 0; i < q; i++)
        {
            ll c;  cin >> c;
            Qe.push_back({c, i, 0});
        }
        sort(all(Qe),[](auto a, auto b){return get<0>(a) <  get<0>(b);});


        // ---------! Operation Section
        ll r = 0, l = 0, sum = 0;
        while(r < n and l<q)
        {   
            if (v[r] > get<0>(Qe[l]))
            {
                get<2>(Qe[l]) = sum;
                l++;
            }
            else
            {
                sum += v[r];
                r++;
            }
        }
        while (l < q)
        {
            get<2>(Qe[l]) = sum; l++;
        }


        sort(all(Qe), [](auto a, auto b) { return get<1>(a) < get<1>(b); });
        for (int i = 0;i<q; i++)
        {
            cout << get<2>(Qe[i]) << " ";
        }
        enter; 
    }

    checkmate;
}