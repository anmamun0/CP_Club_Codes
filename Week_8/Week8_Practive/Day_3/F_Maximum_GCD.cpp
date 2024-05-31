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
bool prime(int n)
{
    if(n==1)return false;
    for (int i = 2; i*i <= n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
bool isPerfact(int n)
{
    int a = n / 2;
    return (a * 2 == n);
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 31 May 2024 ||  10:44:13
     _File    : F_Maximum_GCD.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        bool flag = true;
        int ans = 1;
        for (int i = n; i >= 1; i--)
        {
            if(i%2==0 and isPerfact(i))
            {
                ans = n / 2; break;
            }
        }
        cout << ans << endl;
    }

    checkmate;
}