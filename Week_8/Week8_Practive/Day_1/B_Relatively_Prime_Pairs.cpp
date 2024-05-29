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
     _Created : 29 May 2024 ||  17:12:59
     _File    : B_Relatively_Prime_Pairs.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int l, r;       cin2(l,r);
    vector<bool> prime(3 * 1e5,true);
    for (int i = 2; i*i <=r; i++)
    {
        if(prime[i])
        {
            for (int j = i + i; j <= r; j+=i) prime[j] = false; 
        }
    }
    prime[2] = false;
    vi a, b;
    for(int i = l; i<=r; i++)
    {
        if(prime[i])a.pb(i);
        else b.pb(i);
    }

    int i = 0, j = min(a.size(), b.size());

    vector<pair<int, int>> ans;

    while(i<j)
    {
        ans.pb({a[i], b[i]});
        i++;
    }
    if(i!=a.size()-1)
    {
        j = a.size()-1;
        while(i<j)
        {
            ans.pb({a[i], a[j]});
            i++;
        }
    }
    if(ans.size()>0)
    {
        yes;
        for(auto c:ans)cout<<c.first<<" "<<c.second<<"\n";
    }
    else no;

    checkmate;
}