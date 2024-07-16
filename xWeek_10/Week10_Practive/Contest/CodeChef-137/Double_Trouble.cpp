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
#define  all(x) x.begin(),x.end() 
#define  Public int T; input(T);while(T--)
#define  checkmate return  
#define  __stop print('\n');
#define Run(i, x, y) for (int _s=x, _e=y, _in=(y>x)?1:-1, i=_s;((_in==1)?(i<=_e):(i>=_e)); i+=_in)
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
template <typename T> void input(vector<T>& v){for(auto &c:v)cin>>c;}
template <typename T> void print(vector<T>& v){for(auto c:v)cout<<c<<" ";}
namespace AN{inline void yes() { print("YES\n");}void no(){print("NO\n");}char ln = '\n';
    bool isEven(auto x){return (x&1==0);}bool isPlus(auto x){return (x >= 0);}int len(auto x){return (int)(x).size();}}
using namespace AN;

int main()
{
  /* _Coder   : anmamun0
     _Created : 15 July 2024 ||  19:34:45
     _File    : Double_Trouble.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Public
    {
        int n; input(n);
        vector<int> v(n); input(v);
        vector<int> p(n); input(p);

        vector<int> left(n, 0);
        vector<int> right(n, 0);

        for (int i = 1;i <n; i++)
        {
            if(v[i]-p[i]<= v[i-1])
                left[i] = left[i - 1] + 1;
        }

        for (int i = n - 2; i >= 0; i--)
        {
            if(v[i]+p[i] >= v[i+1])
                right[i] = right[i + 1] + 1;
        }

        bool possible = false;

        for (int i = 0; i < n; i++)
        {
            int current_pow = 0;
            if(i==0)
            {
                current_pow = right[i] + 1;

                if(current_pow ==  n || (current_pow+1+right[i+current_pow] == n))
                {
                    possible = true;
                    break;
                } 
            }
            else if(i==n-1)
            {
                current_pow = left[i] + 1;
                if(current_pow==n|| (current_pow+1+left[i-1-left[i]] == n))
                {
                    possible = true;
                    break;
                }
            }
            else if(2+left[i]+right[i+1] == n)
            {
                possible = true;
                break;
            }
        }

        if(2+right[0] + left[n-1] >= n) possible = true; 

        if(2+right[1] == n) possible = true;

        (possible) ? yes() : no();
    }

    checkmate 0;
}