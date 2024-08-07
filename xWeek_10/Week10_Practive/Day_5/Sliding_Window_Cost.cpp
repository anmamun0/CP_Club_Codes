#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using pbds = tree<T, null_type, less <T>, rb_tree_tag, tree_order_statistics_node_update>;
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

ll Find_Middle (pbds<pair<ll,int>> &window, int w)
{
    int idx = (w - 1) / 2;
    return window.find_by_order(idx)->first;
}

ll windows_cost(pbds<pair<ll,int>> &window, ll mid)
{
    ll cost = 0;
    for (auto it = window.begin(); it != window.end(); it++)
    {
        cost += abs(it->first - mid);
    }

    return cost;
}
int main()
{
  /* _Coder   : anmamun0
     _Created : 02 July 2024 ||  14:50:59
     _File    : D_Sliding_Window_Cost.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;           input(n,k);
    vector<ll> v(n);    input(v); 
    pbds<pair<ll, int>> window;

    int l = 0, r = 0, m = (k- 1) / 2;   
    for (r = 0; r<k; r++) window.insert({v[r], r}); 
    auto mid = *window.find_by_order(m);

    ll cost = 0;
    for(auto c:window) cost += abs(c.X - mid.X);  

    print(cost, " ");

    while(r<n)
    {
        cost -= abs(v[l] - mid.X);
        window.erase({v[l], l});
        l++;

        window.insert({v[r], r});
        auto new_mid = *window.find_by_order(m);
        cost += abs(v[r] - new_mid.X);

        if(isEven(k)) cost -= (new_mid.X - mid.X);
        mid = new_mid;
        r++;

        print(cost, " ");
    } 

    checkmate 0;
}