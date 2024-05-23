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
     _Created : 23 May 2024 ||  22:00:28
     _File    : H_We_Were_Both_Children.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;      cin >> T;
    while(T--)
    {
        ll N;      cin >> N;
        vl v(N);    take_array(v,N-1);
        vl Frq(N+ 2, 0);

        for(auto c:v)
        {
            if(c > N)continue;
            Frq[c]++;
        }
        
        ll ans = 0;
        for (int i = 1; i <= N; i++)
        {
            ll cnt = 0;
            for (int j = 1; j*j <= i; j++)
            {
                if(i%j==0)
                {
                    cnt += Frq[j];
                    if(j*j != i)  cnt += Frq[i / j];
                }
            }
            ans = max(cnt, ans);
        }
        cout << ans << endl;
    }

    checkmate;
}