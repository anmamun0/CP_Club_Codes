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
#define  Public int T; input(T);while(T--)
#define  checkmate return  
#define  __stop print('\n');
#define Run(i, x, y) for (int _s=x, _e=y, _in=(y>x)?1:-1, i=_s;((_in==1)?(i<=_e):(i>=_e)); i+=_in)
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
namespace AN{inline void yes(){cout<<"Yes\n";}void no(){cout<<"No\n";}bool isEven(auto x){return (x&1==0);} bool isPlus(auto x){return (x>=0);} 
    int len(auto x){return (int)(x).size();} template <typename T> void input(vector<T> &v) { for (auto &c : v) cin >> c; } 
    template <typename T> void print(vector<T> v){ for(auto c:v)cout<<c<<" ";}char ln = '\n';}
using namespace AN;

int main()
{
  /* _Coder   : anmamun0
     _Created : 21 August 2024 ||  20:47:14
     _File    : FightBots.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Public
    {
        int n, p, q; input(n,p,q);
        string s; input(s); 
        int x = 0, y = 0;  
        bool flag = false;
        for(auto c:s)
        {
            if(c=='R') x++; 
            else if(c=='L') x--; 
            else if(c=='U') y++; 
            else if(c=='D') y--; 
 
            if(abs(x-p) > abs(y-q))
            {
                if(p<x)p++;
                else p--;
            }
            else 
            {
                if(q<y)q++;
                else q--;
            } 

            if(p==x and y==q)
            {
                flag = true;
                break;
            }
        }
        (flag) ? yes() : no(); 
    }

    checkmate 0;
}