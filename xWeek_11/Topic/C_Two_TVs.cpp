#include <bits/stdc++.h>
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

gcC
{
  /* _Coder   : anmamun0
     _Created : 17 June 2024 ||  23:45:28
     _File    : C_Two_TVs.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; input(n);
    map<int, int> mp;
    for(int i = 1; i<n; i++)
    {
        int l, r;   input(l,r);
        mp[l]++;
        mp[r+1]--;
    }

    int sum = 0;
    bool ok = true;
    for(auto c:mp)
    {
        sum += c.Y;
        if(sum>2)
        {
            ok = false;
            break;
        }
    }
    (ok) ? yes() : no();

    checkmate;
}