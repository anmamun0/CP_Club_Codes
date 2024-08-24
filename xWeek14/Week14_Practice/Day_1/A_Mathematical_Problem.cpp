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
namespace AN{inline void yes(){cout<<"YES\n";}void no(){cout<<"NO\n";}bool isEven(auto x){return (x&1==0);} bool isPlus(auto x){return (x>=0);} 
    int len(auto x){return (int)(x).size();} template <typename T> void input(vector<T> &v) { for (auto &c : v) cin >> c; } 
    template <typename T> void print(vector<T> v){ for(auto c:v)cout<<c<<" ";}char ln = '\n';}
using namespace AN;
int operation(int x,vector<int>&v)
{
    bool isnull = false;
    int val = v[x]*10 + v[x + 1];
    for (int i = 0; i < v.size(); i++)
    {
        if(i==x or i==x+1)continue;
        if(v[i]>1) val += v[i]; 
        if(v[i]==0) isnull = true;
    }
    if(isnull) val = 0;
    return val;
}
int main()
{
  /* _Coder   : anmamun0
     _Created : 23 August 2024 ||  22:36:55
     _File    : A_Mathematical_Problem.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Public
    {
        int n; input(n);
        string s; input(s);
        vector<int> v; for(auto c:s) v.pb(c - '0'); 

        
        if(n==2) 
        {
            cout << v[0]*10+v[1] << endl;
            continue;
        }
        if(n==3)
        {
            int open = (v[0] * 10 + v[1]);
            int end = (v[1] * 10 + v[2]);
            int mn = min(open + v[2], open * v[2]);
            mn = min({mn, end + v[0], end * v[0]});
            cout << mn << endl;
            continue;
        }

        int cup = 1e18; 

        for(int i = 0; i<n-1; i++)
        {
            int val = operation(i, v);
            cup = min(cup, val);
        } 
        cout << cup << endl;
    }

    checkmate 0;
}