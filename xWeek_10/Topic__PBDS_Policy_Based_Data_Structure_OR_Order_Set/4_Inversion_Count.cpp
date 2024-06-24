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
     _Created : 12 June 2024 ||  12:55:19
     _File    : Inversion_Count.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T; input(T);
    while(T--)
    {
        int n;      input(n);
        vi v(n);    for(auto &c:v)input(c);

        pbds<int> pb;
        ll cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            cnt += pb.order_of_key(v[i]);
            pb.insert(v[i]); 
        }
        print(cnt,'\n');
    }

    checkmate;
}