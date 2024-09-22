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
     _Created : 22 September 2024 ||  22:13:20
     _File    : A_Hayato_and_School.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    testCase
    {
        int n; input(n);
        vector<int> v(n); input(v);
        if(n<3)
        {
            no();
        }
        else if(n==3)
        {
            if((v[0]+v[1]+v[2])%2==1)
            {
                cout << "YES\n1 2 3\n";
            }else no();
        }
        else
        {
            vector<couple> odd,even;
            for (int i = 0; i < n; i++)
            {
                if(v[i]%2==1)odd.pb({v[i],i+1});
                else even.pb({v[i],i+1});
            }
            if(odd.size()>=3)
            {
                cout <<"YES\n"<<odd[0].Y << " " << odd[1].Y << " " << odd[2].Y << "\n";
            }
            else if(odd.size()>0 and even.size()>=2)
            {
                cout <<"YES\n"<<even[0].Y << " " << even[1].Y << " " << odd[0].Y << "\n";
            }
            else no();
        }

    }

    checkmate 0;
}