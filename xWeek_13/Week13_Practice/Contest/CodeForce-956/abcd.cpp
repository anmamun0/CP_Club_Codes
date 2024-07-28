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
template<typename T>void input(vector<T>&v){for(auto &c:v)cin>>c;} 
template<typename T>void print(vector<T>&v){for(auto &c:v)cout<<c<<" ";}
namespace AN{inline void yes(){print("YES\n");} void no(){print("NO\n");}char ln='\n';void isEven(auto x){return (x&1==0);}
    void isPlus(auto x){return (x>=0);}int len(auto x){return(int)(x).size();}}
using namespace AN;


int main()
{
  /* _Coder   : anmamun0
     _Created : 13 July 2024 ||  14:43:35
     _File    : abcd.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1, 2, 3, 4, 5};
    set<int> st;
    st.insert(1);

    print(len(v));
    __stop;
    print(len(st));

    checkmate 0;
}