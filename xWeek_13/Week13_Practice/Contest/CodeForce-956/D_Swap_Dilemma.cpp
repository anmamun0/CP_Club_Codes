#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using Segment_tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef pair<int, int> couple;
#define  str string
#define  X first
#define  Y second
#define  pb push_back
// #define  isEven(x) ((x&1)== 0)
// #define  isPlus(x) (x>=0)
#define  all(x) x.begin(),x.end() 
// #define  len(x) (int) (x).size()
#define  Public int T; input(T);while(T--)
#define  checkmate return  
#define  __ print('\n');
#define Run(i, x, y) for (int _s=x, _e=y, _in=(y>x)?1:-1, i=_s;((_in==1)?(i<=_e):(i>=_e)); i+=_in)
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
template<typename T>void input(vector<T>&v){for(auto &c:v)cin>>c;} 
template<typename T>void print(vector<T>&v){for(auto &c:v)cout<<c<<" ";}
namespace AN
{
    inline void yes() { print("YES\n"); }
    void no() { print("NO\n"); }
    char ln = '\n';
    void isEven(auto x)
    {
        return (x & 1 == 0);
    }
    void isPlus(auto x)
    {
        return (x >= 0);
    }
    void len(auto x)
    {
        return (int)(x).size();
    }
}
using namespace AN;

ll inv_count(vector<int>&v)
{
    Segment_tree<int> sg;
    ll inv = 0;

    for (int i = 0; i < v.size(); i++)
    {
        int a = sg.order_of_key(v[i] + 1);
        inv += sg.size() - a;
        sg.insert(v[i]);
    }
    return inv;
}
int main()
{
  /* _Coder   : anmamun0
     _Created : 12 July 2024 ||  22:10:19
     _File    : D_Swap_Dilemma.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Public
    {
        int n; input(n); 
        vector<int> a(n);input(a); 
        vector<int> b(n); input(b);

        multiset<int> s1(all(a));
        multiset<int> s2(all(b));

        if(s1 != s2) 
        {
            no();
            continue;
        }

        if(inv_count(a)%2 != inv_count(b)%2)
        {
            no();
            continue;
        }

        yes();
    }

    checkmate 0;
}