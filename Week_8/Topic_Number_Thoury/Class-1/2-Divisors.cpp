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
void broth_Forc()
{
    int n;  cin >> n;
    for (int i = 1; i <= n;i++)
    {
        if(n%i==0)
        {
            cout << i << " ";
        }
    }
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 16 May 2024 ||  01:42:54
     _File    : 2-Divisors.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;      cin >> n;

    vector<int> Divisors;
    for (int i = 1; i * i <= n; i++) // sqrt(n);
    {
        if (n % i == 0)
        {
            Divisors.push_back(i);

            if(n/i != i) Divisors.push_back(n / i);
        }
    }

    sort(all(Divisors));
    for(auto c:Divisors) cout << c << " "; 

        checkmate;
}

/*
Input :
100

output:
1 2 4 5 10 20 25 50 100
*/