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
#define all_0(v,x) memset(v,x,sizeof(v))
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
     _Created : 08 May 2024 ||  21:49:17
     _File    : storeed_Parameters.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;          cin >> t;
    while (t--)
    {
        int n;      cin >> n;
        vi v(n);    take_array(v,n-1);

        int pair_cnt = 0;
        for (int i = 0;i <n; i++)
        {
            int cur = v[i];
            if(cur==1)pair_cnt+=n;
            else 
            {
                int power = 1;
                for (int j = 0;j <n; j++)
                {
                    if(power > (1e9/cur))break;
                    power *= cur;
                    if(power <=v[j])pair_cnt++;
                }
            }
        }
        cout << pair_cnt << endl;
    }
    checkmate;
}