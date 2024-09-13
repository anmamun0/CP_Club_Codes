#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef pair<int, int> couple;
#define  str string
#define  X first
#define  Y second
#define  pb push_back
#define  all(x) x.begin(),x.end() 
#define  testCase int T; input(T);while(T--)
#define  checkmate return  
#define  __stop print('\n');
#define Run(i, x, y) for (int _s=x, _e=y, _in=(y>x)?1:-1, i=_s;((_in==1)?(i<=_e):(i>=_e)); i+=_in)
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
namespace AN{inline void yes(){cout<<"YES\n";}void no(){cout<<"NO\n";}bool isEven(auto x){return ((x&1)==0);} bool isPlus(auto x){return (x>=0);} 
    int len(auto x){return (int)(x).size();} template <typename T> void input(vector<T> &v) { for (auto &c : v) cin >> c; } 
    template <typename T> void print(vector<T> v){ for(auto c:v)cout<<c<<" ";}char ln = '\n';}
using namespace AN;

int operation(vector<int>&v, int n)
{ 
    map<int, int> mp;

    int zero = 0;
    for (auto &c : v)
    {
        if (c > 0)  mp[c]++;
        else zero++;
    }

    auto maxi = max_element(all(mp), [](couple a, couple b)
                            { return a.second < b.second; });

    mp[maxi->first] += zero;

    int total = 0;
    for (auto &c : mp)
    {
        int cal = (c.second * (c.second - 1)) / 2;
        total += cal;
    }
    return total;
}
int main()
{
  /* _Coder   : anmamun0
     _Created : 04 September 2024 ||  20:55:34
     _File    : Equal_Pairs_Hard.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    testCase
    {
        int n; input(n);
        vector<int> v(n,0);
        for (int i = 0; i < n; i++)
        {
            int idx, val; input(idx,val);
            v[idx-1] = val;
            int total = operation(v, n);
            print(total, " ");
        }
        __stop;
    }

    checkmate 0;
}