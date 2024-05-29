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
ll M = 1e6+10000;
vector<bool> prime(M+10, true);

void Genarate_all_Prime_value()
{
    for (ll i = 2; i*i<=M; i++)
    {
        if(prime[i])
        {
            for (ll j = i + i; j <= M; j+=i) prime[j] = false;
        }
    }
}

bool isPerfectSquare(ll n)
{
    ll x = sqrtl(n);
    return (x * x) == n;
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 27 May 2024 ||  10:25:11
     _File    : B_T_primes.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n; cin >> n;
    vl v(n);    take_array(v,n-1);

    Genarate_all_Prime_value();


    for (ll i = 0;i < n;i++) 
    {
        if ( prime[sqrtl(v[i])] && isPerfectSquare(v[i])) yes;
        else no; 
    }

   

        checkmate;
}

// https://codeforces.com/contest/230/problem/B