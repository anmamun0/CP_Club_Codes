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
void solve()
{
    ll a, b; input(a,b);

    ll c = b + a - 1;

    ll sum1 = (b * (b - 1)) / 2;
    ll sum2 = (c * (c + 1)) / 2;

    ll sum = sum2 - sum1;

    ll mn = 1e18, s = 0;

    while (true)
    {
        s += c;
        sum -= c;
        c--;
        ll ans = abs(sum - s);
        mn = min(mn, abs(sum - s));
        if (ans > mn) break;
    }
    cout << mn << endl;
}
int main()
{
  /* _Coder   : anmamun0
     _Created : 03 September 2024 ||  21:57:44
     _File    : E_Klee_s_SUPER_DUPER_LARGE_Array.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    testCase solve();

    checkmate 0;
}