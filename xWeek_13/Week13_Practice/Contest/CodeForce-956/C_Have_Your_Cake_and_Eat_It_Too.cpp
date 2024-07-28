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
#define __stop print('\n');
#define Run(i, x, y) for (int _s=x, _e=y, _dir=(y>x)?1:-1, i=_s;((_dir==1)?(i<=_e):(i>=_e)); i+=_dir)
template <typename... DataIn> void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut> void print(const DataOut&... val){((cout << val), ...);} 
template <typename T> void input(vector<T>& v){for(auto &c:v)cin>>c;}
template <typename T> void print(vector<T>& v){for(auto c:v)cout<<c<<" ";}
namespace AN{void yes() { print("YES\n");} void no(){print("NO\n");} void Enter() {print("\n");} char ln='\n';
    template<typename Q> inline void Erase_duplicate(vector<Q>& v) { sort(all(v)); v.erase(unique(all(v)),v.end());}}
using namespace AN;

int go(vector<int>&v, int start, ll need)
{
    int r = start;
    ll cur_sum = 0;
    while(r < len(v))
    {
        cur_sum += v[r];
        if(cur_sum >=need)break;
        r++;
    }
    return r;
}
void TEST_CASE()
{
    int n; input(n);
    vector<int> a[3];

    Run(i,0,3-1)
    {
        a[i].resize(n);
        Run(j,0,n-1) cin >> a[i][j]; 
    }

    ll total = accumulate(all(a[0]), 0ll);
    ll need = (total + 3 - 1) / 3;

    vector<int> order = {0, 1, 2};

    do
    {
        int first = order[0];
        int second = order[1];
        int third = order[2];

        int r1 = go(a[first], 0, need);
        int r2 = go(a[second], r1 + 1, need);
        int r3 = go(a[third], r2 + 1, need);

        if (r3 >= n) continue;

        vector<array<int, 3>> ans = {{first, 0, r1}, {second, r1 + 1, r2}, {third, r2 + 1, r3}};
        sort(all(ans));

        for (int i = 0; i < 3; i++)
        {
            cout << ans[i][1]+1 << " " << ans[i][2]+1 << " ";
        }
        cout << "\n";
        return;

    } while (next_permutation(all(order)));
    cout << "-1\n";
}

int main()
{
  /* _Coder   : anmamun0
     _Created : 12 July 2024 ||  21:38:29
     _File    : C_Have_Your_Cake_and_Eat_It_Too.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Public
    {
        TEST_CASE();
    }

    checkmate 0;
}