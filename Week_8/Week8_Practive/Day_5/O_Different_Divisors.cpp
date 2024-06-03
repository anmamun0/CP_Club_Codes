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
const int MAX = 7*1e5+10; 
vector<bool> is_Prime(4 * MAX,true);
void sieve()
{ 
    is_Prime[0] = is_Prime[1] = false;
    for (ll i = 2; i * i <= MAX; i++)
    {
        if(is_Prime[i])
        {
            for (int j = i + i; j <= MAX; j +=i) is_Prime[j] = false; 
        } 
    } 
}
 
gcC
{
  /* _Coder   : anmamun0
     _Created : 02 June 2024 ||  12:06:36
     _File    : O_Different_Divisors.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    ll T;      cin >>T;
    sieve();
    while(T--)
    {
        ll d;      cin >> d;

        ll ans = 1, cnt = 0;
        for (int i = d+1; i <= 1e5+100;i++)
        {
             if(is_Prime[i])
             {
                 ans *= i;
                 i +=  d-1;
                 cnt++;
             }
             if(cnt==2)break;
        }
        cout << ans << endl;
    }

    checkmate;
}