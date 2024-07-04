#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using pbds1 = tree<T, null_type, greater <T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T> 
using pbds2 = tree<T, null_type, less <T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef long long ll;
#define str string
#define X first
#define Y second
#define pb push_back
#define isEven(x) ((x&1)== 0)
#define all(x) x.begin(),x.end() 
#define Public int T; input(T);while(T--)
#define checkmate return  
#define in_range(i, x, y) for (int _s=x, _e=y, _dir=(y>x)?1:-1, i=_s;((_dir==1)?(i<=_e):(i>=_e)); i+=_dir)
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
template <typename T> void input(vector<T>& v){for(auto &c:v)cin>>c;}
template <typename T> void print(vector<T>& v){for(auto c:v)cout<<c<<" ";}
namespace AN{void yes() { print("YES\n");} void no(){print("NO\n");} void enter() {print("\n");} char ln='\n';
    template<typename Q> inline void Erase_duplicate(vector<Q>& v) { sort(all(v)); v.erase(unique(all(v)),v.end());}}
using namespace AN;

int main()
{
  /* _Coder   : anmamun0
     _Created : 03 July 2024 ||  23:03:43
     _File    : I_Enemy_is_weak.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; input(n);
    vector<ll> v(n); input(v);
    vector<ll> v2(n);

    pbds1<ll> a;
    pbds2<ll> b;

    ll cnt = 0;
    for (int i = 0; i<n; i++)
    {
        a.insert(v[i]);
        v2[i] = a.order_of_key(v[i]);
    } 

    for (int i = n - 1; i >= 0; i--)
    {
        b.insert(v[i]); 
        cnt += (b.order_of_key(v[i])) * v2[i];
    }
    print(cnt, ln);

    checkmate 0;
}

// https://codeforces.com/problemset/problem/61/E