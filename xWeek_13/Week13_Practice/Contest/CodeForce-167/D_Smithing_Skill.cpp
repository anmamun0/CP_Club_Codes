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
#define all(x) x.begin(),x.end() 
#define Public int T; input(T);while(T--)
#define checkmate return  
#define in_range(i, x, y) for (int _s=x, _e=y, _dir=(y>x)?1:-1, i=_s;((_dir==1)?(i<=_e):(i>=_e)); i+=_dir)
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
namespace AN{void yes() { print("YES\n");} void no(){print("NO\n");} void enter() {print("\n");} char ln='\n';
    template<typename Q> inline void Erase_duplicate(vector<Q>& v) { sort(all(v)); v.erase(unique(all(v)),v.end());}}
template <typename T> void input(vector<T>& v, size_t n) {v.resize(n); for (auto &c:v){cin>>c;}}
template <typename T> void print(const vector<T>& v, size_t n){for (size_t i=0; i<n; ++i)cout<<v[i]<<" ";}
using namespace AN;

int main()
{
  /* _Coder   : anmamun0
     _Created : 28 June 2024 ||  22:11:35
     _File    : D_Smithing_Skill.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Public 
    {
        int n, q;   input(n, q);

        vector<int> v(n), loss(n);
        input(v, n); input(loss, n);
        

    }

    checkmate 0;
}