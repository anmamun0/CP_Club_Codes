#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef long long ll;
#define vl vector<ll> 
#define vi vector<int> 
#define in_range(i, s, n, ch) for (int i = ((ch=='+')?s:n); ((ch == '+') ? i <= n : i >= s); ((ch == '+') ? ++i : --i))
#define erase_duplicates(x) x.erase(unique(all(x)),x.end()) 
#define all(x) x.begin(),x.end()
#define all_0(x) memset(x,0,kof(x))
#define isEven(x) ((x&1)== 0)
#define yes priment("Yes\n")
#define no priment("No\n")
#define enter priment("\n")
#define ln '\n' 
#define pb push_back
#define gcC int main()
#define checkmate return 0;
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void priment(const DataOut&... val){((cout << val), ...); }

const ll M = 1e5+1; 
vector<ll> sieve()
{
    vector<ll> prime;
    vector<bool> isPrime(M + 1, true); 
    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i <= M; ++i)
    {
        if (isPrime[i])
        {
            prime.push_back(i);
            for (ll j = i * i; j <= M; j += i) isPrime[j] = false; 
        }
    }
    return prime;
}

bool slove(ll n, const vl& v) 
{
    int k = v.size();
    for (int i = 0; i < k; ++i)
    {
        for (int j = i + 1; j < k; ++j)
        {
            ll x = n - (v[i] * v[i]) - (v[j] * v[j]);
            if (x <= 0) break; 

            auto c = lower_bound(v.begin(), v.end(), sqrt(x));

            if (((c != v.end() and *c == sqrt(x)) and (*c != v[i] and *c != v[j])) )
                 return true;
        }
    }
    return 0;
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 12 June 2024 ||  21:59:41
     _File    : TRIPLE_primeMES.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;      input(t);
    vector<ll> prime = sieve();

    while(t--)
    {
        ll n;  input(n);  
        if (n % 2 != 0) {
            no;
            continue;
        }
        (slove(n, prime)) ? yes : no;
    }

    checkmate;
}