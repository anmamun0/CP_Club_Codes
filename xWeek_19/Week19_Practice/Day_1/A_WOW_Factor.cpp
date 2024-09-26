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
void Prefix_Suffix(vector<int>&v, vector<int>&prev, vector<int>&last)
{
    int n = v.size();
    prev[0] = v[0];
    last[n - 1] = v[n - 1];
    for(int i = 1; i<n; i++) prev[i] = prev[i-1]+v[i];
    for(int i = n-2; i>=0; i--) last[i] = last[i+1]+v[i];
}
int main()
{
  /* _Coder   : anmamun0
     _Created : 26 September 2024 ||  22:19:18
     _File    : A_WOW_Factor.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; input(s);
    int n = s.size(), cnt = 0;
    vector<int> v(n+3, 0); 

    for(int i = n-1; i>=0; i--)
    { 
        if(s[i]=='v')cnt++;
        else
        { 
            if(cnt>=2)v[i+1] = cnt-1;
            cnt = 0;
        }
        if(i==0 and cnt>=2) v[i] = cnt-1; 
    }

    vector<int> prev(n+3, 0), last(n+3, 0);
    Prefix_Suffix(v, prev, last);

    ll ans = 0;
    for(int i = 0; i<n; i++)
    {
        if(s[i]=='o')
        { 
            ans += prev[i]*1LL * last[i];
        }
    }
    cout << ans << endl; 

    checkmate 0;
}