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
#define isPlus(x) (x>=0)
#define all(x) x.begin(),x.end() 
#define Public int T; input(T);while(T--)
#define checkmate return  
#define Run(i, x, y) for (int _s=x, _e=y, _dir=(y>x)?1:-1, i=_s;((_dir==1)?(i<=_e):(i>=_e)); i+=_dir)
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
template <typename T> void input(vector<T>& v){for(auto &c:v)cin>>c;}
template <typename T> void print(vector<T>& v){for(auto c:v)cout<<c<<" ";}
namespace AN{void yes() { print("YES\n");} void no(){print("NO\n");} void Enter() {print("\n");} char ln='\n';
    template<typename Q> inline void Erase_duplicate(vector<Q>& v) { sort(all(v)); v.erase(unique(all(v)),v.end());}}
using namespace AN;

int main()
{
  /* _Coder   : anmamun0
     _Created : 05 July 2024 ||  01:28:00
     _File    : A_Greg_and_Array.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;      input(n, m, k);
    vector<ll> v(n);  input(v);  
    vector<tuple<int, int, ll>> op(m+1);

    Run(i,1,m)
    {
        int l, r, val;  input(l,r,val);
        op[i] = {l, r, val};
    }
    vector<ll> cnt(m + 2, 0);
    while(k--)
    {
        int x, y; input(x,y);
        cnt[x]++;
        cnt[y+1]--;
    }
    Run(i, 1, m) cnt[i] = cnt[i-1] + cnt[i]; 

    vector<ll> d(n + 2, 0);
    Run(i, 1, m)
    {
        int l = get<0>(op[i]);
        int r = get<1>(op[i]);
        int val = get<2>(op[i]);
        ll new_val = val * cnt[i]*1ll;
        d[l] += new_val;
        d[r + 1] -= new_val;
    }

    Run(i,1,n) d[i] = d[i - 1] + d[i]; 
    Run(i,1,n)  d[i] = d[i] + v[i - 1]; 
    Run(i, 1, n) print(d[i], " ");

    checkmate 0;
}


 