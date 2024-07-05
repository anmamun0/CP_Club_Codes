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
const int Mx = 200050;
int main()
{
  /* _Coder   : anmamun0
     _Created : 05 July 2024 ||  02:27:31
     _File    : B_Karen_and_Coffee.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q; input(n,k,q);
    map<ll, int> mp; 

    vector<int> v(Mx, 0);

    Run(i,1,n)
    {
        ll l, r; input(l,r);
        v[l]++;
        v[r + 1]--; 
    }
    
    Run(i,1,Mx-10) v[i] += v[i - 1]; 
    
    vector<int> cnt(Mx, 0);
    cnt[1] =  (v[1] >= k) ? 1 : 0;

    Run(i,2,Mx-10)
    {
        cnt[i] = cnt[i - 1];
        if(v[i]>=k)cnt[i]++;
    }
    while(q--)
    {
        int x, y; input(x,y);
        int a = cnt[x - 1];
        int b = cnt[y];
        print(b - a, ln);
    }  

    checkmate 0;
}