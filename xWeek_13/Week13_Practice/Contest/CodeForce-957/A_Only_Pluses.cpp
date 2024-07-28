#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef pair<int, int> couple;
#define str string
#define X first
#define Y second
#define pb push_back
#define isEven(x) ((x&1)== 0)
#define isPlus(x) (x>=0)
#define all(x) x.begin(),x.end() 
#define len(x) (int) (x).size()
#define Public int T; input(T);while(T--)
#define checkmate return  
#define __ print('\n');
#define Run(i, x, y) for (int _s=x, _e=y, _dir=(y>x)?1:-1, i=_s;((_dir==1)?(i<=_e):(i>=_e)); i+=_dir)
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
template <typename T> void input(vector<T>& v){for(auto &c:v)cin>>c;}
template <typename T> void print(vector<T>& v){for(auto c:v)cout<<c<<" ";}
namespace AN{void yes() { print("YES\n");} void no(){print("NO\n");} void Enter() {print("\n");} char ln='\n';
    template<typename Q> inline void Erase_duplicate(vector<Q>& v) { sort(all(v)); v.erase(unique(all(v)),v.end());}}
using namespace AN;

int main()
{
  /* _Coder   : anmamun0
     _Created : 11 July 2024 ||  20:40:24
     _File    : A_Only_Pluses.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Public
    {
        int a, b, c; input(a,b,c);
        ll sum = a * b * c;
        
        priority_queue<int,vector<int>,greater<int>> cat;
        cat.push(a);  cat.push(b); cat.push(c);

        Run(i,1,5)
        {
            int a = cat.top()+1; cat.pop(); 
            cat.push(a);
        }

        ll ans = 1;
        while(!cat.empty())
        {
            ans *= cat.top(); 
            cat.pop();
        }

        print(max(sum,ans), ln);
    }

    checkmate 0;
}