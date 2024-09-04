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

void operation(vector<ll>&v,vector<ll>&window)
{
    int n = v.size();

    for (int k = 2; k <= n; k++)
    {
        ll seg = 0, cnt = INT_MIN;
        int l = 0, r = 0;
        while (r < n)
        {
            seg += v[r];
            if ((r - l + 1) == k)
            {
                cnt = max(cnt, seg);
                seg -= v[l];
                l++;
            }
            r++;
        }
        window.pb(cnt);
    }
}

int main()
{
  /* _Coder   : anmamun0
     _Created : 04 September 2024 ||  02:39:45
     _File    : C_Increase_Subarray_Sums.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    testCase
    {
        int n, x; input(n,x);
        vector<ll> v(n); 

        ll single = INT_MIN;
        for(auto &c:v)
        {
            input(c);  
            single = max(single, c);
        }

        vector<ll> window = {single};
        operation(v, window);

        ll mx = 0;
        for (int i = 0; i <= n; i++)
        {
            for(int j = 0; j<window.size(); j++)
            {
                ll sum ;
                if(i>j+1) sum = window[j] + (x * j + 1);
       
                else sum = window[j] + (x * i);

                mx = max(mx, sum);
            }
            print(mx, " ");
        }
        __stop;
     }

    checkmate 0;
}