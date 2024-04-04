/*
    _Coder   : anmamun0 || 03 April 2024 ||  13:03:19
    _File    : L_Train_and_Queries.cpp
     بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
*/
#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<int> 
#define in_range(i,s,n) for(int i=s; i<=n; i++)
#define in_range_back(i,s,n) for(int i=n; i >= s; i--)
#define take_array(v,n) in_range(i,0,n-1) cin>>v[i]
#define print_array(v) for(auto c:v){cout<<c<<" ";}cout<<ln
#define erase_duplicates(x) x.erase(unique(all(x)),x.end());
#define cin2(a, b) cin >> a >> b;
#define cin3(a, b, c) cin >> a >> b >> c;
#define all(x) x.begin(),x.end()
#define all_0(x) memset(x,0,sizeof(x))
#define isEven(x) (x%2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"
#define ln '\n'
#define PQ priority_queue
#define Hashmap unordered_map
#define pb push_back
#define e4 int main()
#define checkmate   return 0;
using namespace std;
e4
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, q; cin2(n, q);
        vec v(n);

        map<int, vec> mp;
        in_range(i,0,n-1)
        {
            cin >> v[i];
            mp[v[i]].pb(i);
        }

        while(q--)
        {
            int a, b; cin2(a, b);
            bool chack = false;

            if (!mp[a].empty() and !mp[b].empty())
            {
                if((a == b) or (mp[a].front() < mp[b].back())) chack = true;
            }
            (chack) ? yes : no;
        }
    }
    checkmate;
}