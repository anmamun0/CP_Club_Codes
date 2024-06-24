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
#define print_vector(v) for_each(all(v),[&](int x){print(x," ");if(x == v.back()) print("\n");})
#define all(x) x.begin(),x.end() 
#define gcC int main()
#define checkmate return 0;
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
namespace AN{void yes() { print("YES\n");} void no(){print("NO\n");} void enter() {print("\n");} char ln='\n';
    template<typename Q> inline void Erase_duplicate(vector<Q>& v) { sort(all(v)); v.erase(unique(all(v)),v.end());}}
using namespace AN;

gcC
{
  /* _Coder   : anmamun0
     _Created : 23 June 2024 ||  20:54:47
     _File    : A_X_Axis.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; input(t);
    while(t--)
    {
        int a, b, c; input(a,b,c);

        int x = abs(a - a) + abs(a - b) + abs(a - c);
        int y = abs(b - a) + abs(b - b) + abs(b - c);
        int z = abs(c - a) + abs(c - b) + abs(c - c);
        print(min({x, y, z}),"\n");
    }

    checkmate;
}