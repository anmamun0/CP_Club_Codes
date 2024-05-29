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
     _Created : 23 May 2024 ||  23:54:23
     _File    : 6-Prime-Fatorization.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 20;
    vector<bool> prime(n + 1, true);
    for (int i = 2; i <= n;i++) // i*i <= n
    {
        if(prime[i])
        {
            for(int j = i+i; j<=n; j+=i)prime[j] = false;   
        }
    }
    vector<int> all_prime;
    for (int i = 2; i<=n; i++)
    {
        if(prime[i])
        {
            all_prime.push_back(i);
        }
    }

    map<int, int> cnt;
    int x, idx = 0;
    cin >> x;

    while(x>1)
    {
        if(x%all_prime[idx]==0)
        {
            cnt[all_prime[idx]]++;
            x /= all_prime[idx];
        }
        else{
            idx++;
        }
    }
    for(auto c:cnt)
    {
        cout << c.first << " " << c.second << endl;
    }

    checkmate;
}

/*
input:
18

output: 18 =2*3*3
2^1
3^2
*/