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
namespace AN{inline void yes(){cout<<"YES\n";}void no(){cout<<"NO\n";}bool isEven(auto x){return (x&1==0);} bool isPlus(auto x){return (x>=0);} 
    int len(auto x){return (int)(x).size();} template <typename T> void input(vector<T> &v) { for (auto &c : v) cin >> c; } 
    template <typename T> void print(vector<T> v){ for(auto c:v)cout<<c<<" ";}char ln = '\n';}
using namespace AN;

ll cnt = 0;

bool palindrom(string s)
{
    int i = 0, j = s.size() - 1;
    while(i<j)
    {
        cnt++;
        if(s[i++]!=s[j--])return false; 
    }
    return true;
}
vector<string> a;
vector<vector<string>> ans;

void partition(string s) 
{
    if(s.size()==0)
    {
        ans.pb(a);
        return;
    }

    for (int i = 1; i <= s.size(); i++)
    {
        string fast = s.substr(0, i);
        string last = s.substr(i,s.size());
        cnt++;
        if(palindrom(fast))
        {
            
            a.push_back(fast);
            partition(last);
            a.pop_back();
        }
    }
}

int main()
{
  /* _Coder   : anmamun0
     _Created : 26 July 2024 ||  16:02:51
     _File    : 4_131-Palindrome_Partitioning.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    partition("cccccc");
    print(cnt);

    for(auto c:ans)
    {
        print(c);
        __stop;
    }

    checkmate 0;
}

/*
Example 1:

Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]
Example 2:

Input: s = "a"
Output: [["a"]]
*/

// https://leetcode.com/problems/palindrome-partitioning/description/


