#include <bits/stdc++.h>
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
#define in_range(i, s, ch) for (int i= s.X; ((ch)? i<= s.Y: i>=s.Y);((ch)?++i:--i))
#define for_each(v) for_each(all(v),[&](int x){print(x," ");if(x==v.back())print("\n");})
#define all(x) x.begin(),x.end() 
#define gcC int main()
#define checkmate return 0;
template <typename... DataIn> void input(DataIn&... val){(cin>> ... >>val);}
template <typename... DataOut> void print(const DataOut&... val){((cout<<val), ...);} 
namespace AN{void yes(){print("YES\n");}void no(){print("NO\n");} void enter(){print("\n");} char ln='\n';
    template<typename Q> inline void Erase_duplicate(vector<Q>& v){sort(all(v));v.erase(unique(all(v)),v.end());}}
using namespace AN;

gcC
{
  /* _Coder   : anmamun0
     _Created : 17 June 2024 ||  19:32:27
     _File    : 1_Difference_array_basic.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;               input(n, q);
    vector<int> v(n+1);      for(int i =1; i<=n ;i++)input(v[i]);

    vector<int> d(n+2,0); 

    for (int i = 1; i <= q; i++)
    {
        int l, r, x; input(l,r,x); 
        d[l] += x;
        d[r + 1] -= x;
    }
    for(int i = 1; i<=n; i++)
    {
        d[i] = d[i - 1] + d[i];
    }

    enter();
    for(int i = 0; i<=n; i++) print(d[i], " ");

    checkmate;
}