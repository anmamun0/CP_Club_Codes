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
 
vector<vector<int>> ans;
vector<int> Freq; 
void Permutations(vector<int>&nums,  vector<int>&a)
{
    if(nums.size() == a.size())
    {
        ans.pb(a);
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if(!Freq[i])
        {
            a.pb(nums[i]);
            Freq[i] = 1;
            Permutations(nums, a);
            Freq[i] = 0;
            a.pop_back();
        }
    }
}  
int main()
{
  /* _Coder   : anmamun0  _Created : 25 July 2024 ||  22:41:39
     _File    : 3_46-Permutaions.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;                 input(n);
    vector<int> nums(n);   input(nums); 
    Freq.resize(n);        fill(all(Freq), 0);

    vector<int> a;
    Permutations(nums, a);
    for(auto c:ans)
    {
        print(c); __stop;
    }

    checkmate 0;
} 

// https://leetcode.com/problems/permutations/