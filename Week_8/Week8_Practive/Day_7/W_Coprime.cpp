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
const int mxN = 1000;
gcC
{
  /* _Coder   : anmamun0
     _Created : 04 June 2024 ||  23:01:12
     _File    : W_Coprime.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> coprime[10011];
    in_range(i, 1, mxN) in_range(j, 1, mxN)
        if (__gcd(i, j) == 1) coprime[i].pb(j);

    int T; cin >> T;
    while(T--)
    {
        int n;        cin  >> n;
        vi v(n+1);    in_range(i,1,n)cin>>v[i];

        vi mx(1011,-1);
        for (int i = 1; i <= n; i++)mx[v[i]] = i;

        int ans = 0;

        for (int i = 1; i <= mxN; i++)
        {
            if(mx[i] == -1)continue;
            if(i==1) ans = max(ans, 2 * mx[i]);  
            else 
            {
                for(auto p:coprime[i])
                {
                    if(mx[p]!=-1) ans = max(ans,mx[i]+mx[p]);
                }
            }
        }
        cout << (ans == 0 ? -1 : ans) << '\n';
    }
    
    checkmate;
}