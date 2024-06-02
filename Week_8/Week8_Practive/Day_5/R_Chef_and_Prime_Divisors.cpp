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
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define enter cout << "\n"
#define ln '\n'
#define PQ priority_queue
#define Hashmap unordered_map
#define pb push_back
#define gcC int main()
#define checkmate return 0;
 
using namespace std;
// using namespace __gnu_pbds;
vl sieve(int n) 
{
    vl primes;
    vector<bool> is_prime(n + 1, true);

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i*i <= n; ++i)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= n; j += i) is_prime[j] = false; 
        }
    }
    return primes;
}
set<ll> solution(ll n, const vl &primes)
{
    set<ll> factors;
    for (ll prime : primes)
    {
        if (prime * prime > n) break;
        if (n % prime == 0)
        {
            factors.insert(prime);
            while (n % prime == 0) n /= prime; 
        }
    }
    if (n > 1) factors.insert(n);

    return factors;
}
vl prime(ll n)
{
    vl v;
    map<ll, ll> cnt;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt[i]++;
                n /= i;
            }
        }
    } if(n>1) cnt[n]++; 

    for(auto c:cnt)v.pb(c.first);
    return v;
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 02 June 2024 ||  17:40:05
     _File    : R_Chef_and_Prime_Divisors.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;
    while(t--)
    {
        ll a, b;   cin2(a ,b);
        
        vl primes = sieve(max(a,b));
        // print_array(primes);

        set<ll> one = solution(a, primes);
        set<ll> two = solution(b, primes);

        bool flag = true;
        for (int c : two)
        {
            if (one.find(c) == one.end())
            {
                flag = false;
                break;
            }
        }
        (flag) ? yes : no;
    }

    checkmate;
}