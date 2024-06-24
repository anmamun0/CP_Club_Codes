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
#define in_range(i, x, y) for (int _s=x, _e=y, _dir=(y>x)?1:-1, i=_s;((_dir==1)?(i<=_e):(i>=_e)); i+=_dir)
#define print_vector(v) for_each(all(v),[&](int x){print(x," ");if(x == v.back()) print("\n");})
#define all(x) x.begin(),x.end() 
#define gcC int main()
#define checkmate return 0;
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
namespace AN{void yes() { print("YES\n");} void no(){print("NO\n");} void enter() {print("\n");} char ln='\n';
    template<typename Q> inline void Erase_duplicate(vector<Q>& v) { sort(all(v)); v.erase(unique(all(v)),v.end());}}
using namespace AN;

int n, m;
vector<pair<int, int>> d = {{0,1}, {0,-1}, {-1,0}, {1,0}}; 
bool valid(int i,int j)
{
    return (i>=0 and i<n and j>=0 and j<m);
}
pair<bool,ll> big(int i , int j,vector<vector<ll>>&v)
{
    ll flag = true; 
    ll mx = 0;
    for(auto c:d)
    {
        int a = i + c.X;
        int b = j + c.Y;
        if(valid(a,b))
        { 
            mx = max(mx, v[a][b]);
            if(v[i][j]<= v[a][b])flag = false;
        }   
    } 
    return {flag,mx}; 
}

gcC
{
  /* _Coder   : anmamun0
     _Created : 23 June 2024 ||  21:04:50
     _File    : B_Matrix_Stabilization.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; input(t);
    while(t--)
    {
        input(n,m);
        vector<vector<ll>> v(n, vector<ll>(m));
        for (int i = 0; i<n; i++)
        {
            for (int j = 0; j < m; j++) input(v[i][j]); 
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0;j <m; j++)
            {
                pair<bool, ll> catchh = big(i, j, v);
                if(catchh.X)v[i][j]= catchh.Y;
                print(v[i][j], " ");
            }
            enter(); 
        } 
    }

    checkmate;
}