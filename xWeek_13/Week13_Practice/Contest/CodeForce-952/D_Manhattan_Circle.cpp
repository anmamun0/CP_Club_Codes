#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef long long ll;
#define vl vector<ll> 
#define vi vector<int> 
#define in_range(i, s, n, ch) for (int i = ((ch=='+')?s:n); ((ch == '+') ? i <= n : i >= s); ((ch == '+') ? ++i : --i))
#define erase_duplicates(x) x.erase(unique(all(x)),x.end()) 
#define all(x) x.begin(),x.end()
#define all_0(x) memset(x,0,sizeof(x))
#define isEven(x) ((x&1)== 0)
#define yes print("YES\n")
#define no print("NO\n")
#define enter print("\n")
#define ln '\n' 
#define pb push_back
#define gcC int main()
#define checkmate return 0;
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...); }
 
gcC
{
  /* _Coder   : anmamun0
     _Created : 11 June 2024 ||  21:35:19
     _File    : D_Manhattan_Circle.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; input(t);
    while(t--)
    {
        int m,n;
        input(m,n);

        vector< vector<char> > v(m + 1, vector<char>(n + 1));
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j<=n; j++)
            {
                input(v[i][j]); 
            } 
        }

        pair<int, int> up, down;
        for (int i = 1; i <= m; i++)
        {
            bool ch = false;
            for (int j = 1; j<=n; j++)
            {
                if(v[i][j]=='#')
                { 
                    up = {i, j};
                    ch = true;
                    break;
                }
            }
            if(ch)break;
        }

        for (int i = m; i >=1 ; i--)
        {
            bool ch = false;
            for (int j = 1; j<=n; j++)
            {
                if (v[i][j] == '#')
                {
                    down = {i, j};
                    ch = true;
                    break;
                }
            }
            if(ch)break;

        }

        int a = (down.first - up.first)/2;
        print(up.first+a, " ", up.second, ln); 

     
    }

    checkmate;
}