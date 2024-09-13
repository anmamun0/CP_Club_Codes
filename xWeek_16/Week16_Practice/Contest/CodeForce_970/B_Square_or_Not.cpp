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
namespace AN{inline void yes(){cout<<"Yes\n";}void no(){cout<<"No\n";}bool isEven(auto x){return ((x&1)==0);} bool isPlus(auto x){return (x>=0);} 
    int len(auto x){return (int)(x).size();} template <typename T> void input(vector<T> &v) { for (auto &c : v) cin >> c; } 
    template <typename T> void print(vector<T> v){ for(auto c:v)cout<<c<<" ";}char ln = '\n';}
using namespace AN;

bool chack(int i , int j, int len)
{
    return i == 0 || j==0 || i == len ||  j == len;
}

bool slove(str s, int len) 
{
    for(int i = 0; i<len; i++)
    {
        for(int j = 0; j<len; j++) 
        {
            char idx = s[(i*len) + j]; 

            if(chack(i,j,len-1))
            {
                if (idx == '0')  return false;
            }  
            else 
            { 
                if (idx == '1')  return false;
            }
        } 
    }
    return true;
}

int main()
{
  /* _Coder   : anmamun0
     _Created : 01 September 2024 ||  21:02:41
     _File    : B_Square_or_Not.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    testCase
    {
        int n; input(n);
        str s; input(s);  

        int len = sqrt(n); 
        if(len*len != n)
        {
            no();
            continue;
        }

        bool cnt = slove(s, len);
        cnt ? yes() : no();  
    }

    checkmate 0;
}



 