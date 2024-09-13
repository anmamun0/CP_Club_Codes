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
const int MOD = 1e9 + 7;

ll binaryExponentiation(ll base, ll exp, ll mod) 
{
    long long result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1) 
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
int main()
{
  /* _Coder   : anmamun0
     _Created : 01 September 2024 ||  21:56:07
     _File    : F_Sakurako_s_Box.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    testCase
    {
        int n;input(n);

        vector<ll> a(n);

        ll sum = 0;
        ll sum_of_squares = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum += a[i];
        }
        int P = 0;
        for (int i = 0; i < n; ++i)
        {
            sum -= a[i];
            P += a[i] * sum;
        }

        //  long long P = (sum * sum % MOD - sum_of_squares + MOD) % MOD;
        ll Q = n * (n - 1) / 2 % MOD;
        ll Q_inv = binaryExponentiation(Q, MOD - 2, MOD);
        ll result = P * Q_inv % MOD;
        cout << result << '\n';
    }

    checkmate 0;
}
 