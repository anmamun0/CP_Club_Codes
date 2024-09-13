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

 
int main()
{
  /* _Coder   : anmamun0
     _Created : 13 September 2024 ||  19:11:05
     _File    : C_Palindromic_Numbers.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    testCase
    {
        int n;input(n); 
        str s, ans=""; input(s); 
        if(s.front()!='9')
        {
            for(auto c:s)
            {
                int temp = 9-(c-'0');
                cout << temp;
            }
            __stop;
        }
        else
        {
            reverse(all(s)); 
            int carry = 0;
            for(char c:s) 
            {
                int temp = (c-'0')+carry;

                carry = 0;
                int x = 1;

                if(temp>x) 
                {
                    x += 10;
                    carry = 1;
                }
                ans = (to_string(x - temp)) + ans; 
            }
            cout << ans << endl;
        }
    }

    checkmate 0;
}