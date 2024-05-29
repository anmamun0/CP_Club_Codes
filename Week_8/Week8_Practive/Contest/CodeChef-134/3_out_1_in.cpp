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
     _Created : 29 May 2024 ||  14:51:08
     _File    : 3_out_1_in.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;      cin >> T;
    while(T--)
    {
        int n, q;       cin >> n >> q;
        vi v(n);        take_array(v,n-1);
        // vi qu(q);       take_array(qu,q-1);

        multiset<int> mini, maxi;
        vl ans(n);
        ll s1 = 0, s2 = 0;
        for (int i = 0; i<n; i++)
        {
            mini.insert(v[i]);
            s1 += v[i];
            if(mini.size() >maxi.size())
            {
                int val = *mini.rbegin();
                mini.erase(--mini.end());
                maxi.insert(val);
                s1 -= val, s2 += val;
            }
            if(!mini.empty() and !maxi.empty() and (*mini.rbegin() > *maxi.begin()))
            {
                int x = *mini.rbegin(), y = *maxi.begin();
                s1 -= x, s1 += y;
                s2 -= y, s2 += x;

                mini.erase(--mini.end()), maxi.erase(maxi.begin());
                mini.insert(y),           maxi.insert(x);
            }
            ans[i] = (s2 - s1);
        }
        while(q--)
        {
            int x;      cin >> x;
            cout << ans[--x] << " ";
        }
        enter;
    } 
    checkmate;
}

/*
for (int i = 0;i <q; i++)
        {
            vi x(v.begin(), v.begin() + qu[i]);
             
            sort(all(x),greater<int>());

            int mini = qu[i] / 2;
            int maxi = mini + 1;

            int ans = 0;
            for (int j = 0; j < x.size(); j++)
            {
                if(j<maxi) ans+=x[j];
                else ans-=x[j];
            }
            cout << ans << ' ';
        }
*/