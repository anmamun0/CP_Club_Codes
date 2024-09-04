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
     _Created : 04 September 2024 ||  16:56:37
     _File    : H_Asterisk_Minor_Template.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    testCase
    {
        str a, b; input(a,b);
        map<string, pair<int,int>> mp; 
        str s;
        int one = 0;
        int two = 0;
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = i; j < a.size(); j++)
            {
                str sub = a.substr(i, (j - i + 1));
                auto it = b.find(sub);

                if(it != string::npos)
                {
                    mp[sub] = {i, it};
                    // cout << sub << " " << i << " " <<it <<endl;
                    if(sub.size()> s.size())
                    { 
                        s = sub;
                        one = i;
                        two = it;
                    }
                } 
            }
        }

        if(s.size()==0) 
        {
            cout<<"NO\n";
            continue;
        }

        bool first = false, last = false; 
 
        if(one >0 or two>0)first = true; 
        if((s.size()+one) < a.size() or (s.size()+two) < b.size())last = true;

        if(s.size()==1 )
        {
            if(first and last)
            {
                cout<<"NO\n";
                continue;
            }   
            else 
            {
                yes();
                if(first)s = '*'+s;
                if(last) s+= '*';
            }
        } 
        else 
        {
            yes();
            if(first)s = '*'+s;
            if(last) s+= '*';
        }
        cout << s << endl;
    }

    checkmate 0;
}