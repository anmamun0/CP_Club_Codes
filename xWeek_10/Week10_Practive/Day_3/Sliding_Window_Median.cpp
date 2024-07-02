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
     _Created : 02 July 2024 ||  14:32:30
     _File    : Sliding_Window_Median.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;    input(n,k);
    vector<ll> v(n), result;
    input(v); 

    pbds<pair<ll,int>> pb;
    int l = 0, r = 0;

    while(r<n)
    {
        pb.insert({v[r], r});
        if(r-l+1 ==k)
        {
            int m = k / 2;
            if(k%2==0)m--;
            auto val = pb.find_by_order(m);
            result.pb(val->first);
            pb.erase({v[l], l});
            l++;
        }
        r++;
    }
    for(auto &c:result)print(c," ");

    

    checkmate 0;
}