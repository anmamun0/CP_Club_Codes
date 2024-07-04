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
     _Created : 17 June 2024 ||  19:32:27
     _File    : 1_Difference_array_basic.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;  input(n, q);
    vector<int> v(n+1);  
    Run(i,1,n) input(v[i]); 

    vector<int> d(n+2,0);  
    while(q--) 
    {
        int l, r, x; input(l, r, x);

        d[l] += x;
        d[r + 1] -= x;
    }       
    //Prefix
    for (int i = 1; i<=n; i++)
    {
        d[i] = d[i - 1] + d[i];
    } 
    // Enter();
    // Run(i, 1, n) print(d[i], " "); 
    vector<int> ans(n + 1);
    Run(i, 1, n) ans[i] = d[i] + v[i];

    Run(i, 1, n) print(ans[i], " ");

    checkmate 0;
}

/*
input:
5 3
2 5 1 8 13
1 3 4
2 5 7
1 5 2

output:
8 18 14 17 22 
*/