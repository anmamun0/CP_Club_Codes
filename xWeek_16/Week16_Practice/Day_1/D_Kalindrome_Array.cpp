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
bool palindrom(vector<int>&v,int del, vector<int>&idx)
{
    if(idx.size()==0) return true;

    int i = 0, j = v.size() - 1;
    int a = 0, b = idx.size()-1;

    bool flag = true;
    while(i<=j)
    {
        if(i==idx[a])i++,a++;
        if(j==idx[b])j--,b--;

        if(v[i] != v[j])
        {
            flag = false;
            break;
        }
        i++, j--;
    }
    return flag;
}
int main()
{
  /* _Coder   : anmamun0
     _Created : 13 September 2024 ||  19:48:09
     _File    : D_Kalindrome_Array.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    testCase
    {
        int n; input(n);
        vector<int> v(n);
        str s;
        map<int, vector<int>> mp;
        for(int i = 0; i<n; i++)
        {
            input(v[i]);
            mp[v[i]].pb(i);
        }

        bool flag = false;
        for(auto c:mp)
        {
            int del = c.first;
            vector<int> idx = c.second;
            if(n - idx.size()<1)
            {
                flag = true;
                break;
            }
            bool chack = palindrom(v, del, idx);
            if(chack)
            {
                flag = true;
                break;
            }
        }
        (flag) ? yes() : no();
    }

    checkmate 0;
}