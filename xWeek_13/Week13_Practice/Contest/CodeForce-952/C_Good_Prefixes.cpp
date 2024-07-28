#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef long long ll;
#define vl vector<ll> 
#define vi vector<int> 
#define in_range(i, s, n, ch) for (int i = ((ch=='+')?s:n); ((ch == '+') ? i <= n : i >= s); ((ch == '+') ? ++i : --i))
#define erase_duplicates(x) x.erase(unique(all(x)),x.end()) 
#define all(x) x.begin(),x.end()
#define all_0(x) memset(x,0,sizeof(x))
#define isEven(x) ((x&1)== 0)
#define yes print("YES\n")
#define no print("NO\n")
#define enter print("\n")
#define ln '\n' 
#define pb push_back
#define gcC int main()
#define checkmate return 0;
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...); }
 
gcC
{
  /* _Coder   : anmamun0
     _Created : 11 June 2024 ||  21:11:26
     _File    : C_Good_Prefixes.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;      input(t);
    while(t--)
    {
        int n;      input(n);
        vl v(n);     for(auto &c:v)input(c);

        ll p = 0 ,cnt = 0;
        multiset<ll> st;

        for (int i = 0; i < n;i++)
        {
            p += v[i];

            st.insert(v[i]);
            ll x = *st.rbegin();

            (p - x == x) ? cnt++ : 0;
        }
        print(cnt,ln);
    }

    checkmate;
}