#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
#define str string
#define X first
#define Y second
#define pb push_back
#define all(x) x.begin(),x.end() 
#define checkmate return  
#define in_range(i, x, y) for (int _s=x, _e=y, _dir=(y>x)?1:-1, i=_s;((_dir==1)?(i<=_e):(i>=_e)); i+=_dir)
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
namespace AN{void yes() { print("YES\n");} void no(){print("NO\n");} void enter() {print("\n");} char ln='\n';
    template<typename Q> inline void Erase_duplicate(vector<Q>& v) { sort(all(v)); v.erase(unique(all(v)),v.end());}}
// -? Operator overloads?
template <typename T1, typename T2> istream &operator>>(istream &is, pair<T1,T2> &p) {return (is>>p.X>>p.Y);}
template<typename T> istream& operator>>(istream &is, vector<T> &v) { for (auto &c:v) input(c);return is;}
template<typename T1, typename T2> ostream& operator<<(ostream &os , const pair<T1,T2> &p) {return (os<<p.X <<" "<<p.Y);}
template<typename T> ostream& operator<<(ostream &os ,const vector<T> &v) { for(const auto &c:v){ print(c," ");}print("\n"); return os;}
using namespace AN;
 
int main()
{
  /* _Coder   : anmamun0
     _Created : 25 June 2024 ||  14:55:28
     _File    : C_Berpizza.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL); 

    int t, i = 1;
    input(t); 
 
    pbds<pair<int, int>> people;
    pbds<pair<int, int>> money;
    vector<pair<int, int>> serve;
    
    while(t--)
    {
        int q; input(q);
        if(q==1)
        {
            int tk; input(tk); 

            people.insert({i, tk}); 
            money.insert({tk, i}); 
            i++;
        }
        else if(q==2)
        {
            if(!people.empty())
            {
                auto a = *people.begin(); 
                serve.push_back({a.X, a.Y}); 
                money.erase({a.Y, a.X});
                people.erase(people.begin());
            }
        }
        else if(q==3)
        {
            if(!money.empty())
            {

                auto last = *prev(money.end());
                int n = money.order_of_key({last.X, -1});

                auto a = *money.find_by_order(n); 
                serve.push_back({a.Y, a.X});
                money.erase({a.X, a.Y});
                people.erase({a.Y, a.X});
            }
        } 
    }  
    for(auto c:serve) print(c.X," ");
    enter();

    checkmate 0;
} 
