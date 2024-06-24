#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
#define str string
#define X first
#define Y second
#define pb push_back
#define in_range(i, x, y) for (int _s=x, _e=y, _dir=(y>x)?1:-1, i=_s;((_dir==1)?(i<=_e):(i>=_e)); i+=_dir)
#define for_each(v) for_each(all(v),[&](int x){print(x," ");if(x == v.back()) print("\n");})
#define all(x) x.begin(),x.end() 
#define gcC int main()
#define checkmate return 0;
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
namespace AN{void yes() { print("YES\n");} void no(){print("NO\n");} void enter() {print("\n");} char ln='\n';
    template<typename Q> inline void Erase_duplicate(vector<Q>& v) { sort(all(v)); v.erase(unique(all(v)),v.end());}}
using namespace AN;

int M = 1e5+10;
vector<int> v, Fector(M, 0);

void Gererator() 
{
    for (int i = 2; i < M; ++i)
    {
        if (Fector[i] == 0)
        { 
            for (ll j =  i; j < M; j += i)
            {
                if (!Fector[j]) Fector[j] = i; 
            }
        }
    } 
    Fector[1] = 1;
} 
gcC
{
  /* _Coder   : anmamun0
     _Created : 19 June 2024 ||  22:16:46
     _File    : Sum_of_N.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Gererator();
    for (int i = 2; i < M; ++i)  if (Fector[i] == i) v.pb(i);  
    int t; input(t);

    while (t--) 
    {
        ll n, ans = 0 ; input(n);
        ll  store = (Fector[n] == n) ? n : Fector[n];

        for (int c : v) 
        {
            if (c > store) break;
            ans += 1LL* c * n;
        }

        print(ans, ln);
    }

    checkmate;
}
 