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
     _Created : 01 May 2024 ||  21:53:24
     _File    : Optimal_Flip.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >>t;
    while(t--)
    {
        int n;  cin>>n;
        vi v(n);    take_array(v,n-1);

        ll ans = ((1LL * n * (n + 1)) / 2);
        int idx = 0;
        vector<int> st;

        while(idx<n)
        {
            int cnt = 0;
            if(!isEven(v[idx]))
            {
                while(idx<n and !isEven(v[idx])) cnt++,idx++;
                st.push_back(cnt);
            }
            else idx++; 
        }

        sort(begin(st), end(st)); 

        for(auto c:st)
        {
            ll total = ((1LL * c * (c + 1)) / 2);
            ans -= total;
        }


        if(st.size()>=1)
        {
            int cur = st.back(), mid = (cur / 2);

            if(!isEven(cur))
            {
                mid++;
                ans += (1ll * mid * mid);
            }
            else ans+= (1LL*mid*(mid+1));
        }
        cout << ans << endl;

    }

    checkmate;
}