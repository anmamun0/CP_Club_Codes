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

const int maxN = 1e5 + 9;
int v[maxN], Tree[4 * maxN];

void build(int node, int l, int r)
{
    if(l==r)
    {
        Tree[l] = v[l];
        return;
    }
    int mid = (l + r) + 1;
    int leftNode = (2 * node), rightNode = (2 * node) + 1;
    build(leftNode, l, mid);
    build(rightNode, mid + 1, r);
    Tree[node] = Tree[leftNode] + Tree[rightNode];
}
void update(int node, int l ,int r,int idx, int val)
{
    if(idx<l or idx>r)return;
    if(l==r)
    {
        Tree[node] = val;
        return;
    }
    int mid = (l + r) / 2;
    int leftNode = (2 * node), rightNode = (2 * node) + 1;

    update(leftNode, l, mid, idx, val);
    update(rightNode, mid + 1, r, idx, val);
    Tree[node] = Tree[leftNode] + Tree[rightNode];
}

int query(int node,int l, int r, int start, int end)
{
    // Out -> 
    if(r<start or end < l) return 0;
    // Intersect ->
    if(l>=start and r<=end) return Tree[node];

    int mid = (l + r) / 2;
    int leftNode = (2*node),rightNode = (2*node) + 1;

    int left = query(leftNode, l, mid, start, end);
    int right = query(rightNode, mid + 1, r, start, end);
    return min(left , right);
}

int main()
{
  /* _Coder   : anmamun0
     _Created : 13 September 2024 ||  00:38:45
     _File    : E_Tracking_Segments.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    testCase
    {
        int n, m, q;
        input(n, m);
        vector<couple> v(n);
        for (int i = 1; i <= m; i++)
        {
            cin >> v[i].first >> v[i].second;
        }
        cin >> q;
        vector<int> queries(q); input(queries);
    }
    

    checkmate 0;
}