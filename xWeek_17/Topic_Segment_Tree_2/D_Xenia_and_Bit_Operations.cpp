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

const int mxN = (1<<17) + 9;
int v[mxN], Tree[4 * mxN];
int merge(int left, int right,int len)
{
    int pw  = __lg(len);
    if(pw%2 == 1)
    {
        return  (left | right);
    }
    else return  (left ^ right);
 
}
void build(int node, int l, int r)
{
    if(l==r)
    {
        Tree[node] = v[l];
        return;
    }
    int mid = (l + r) / 2;
    int leftNode = (2 * node), rightNode = (2 * node) + 1;

    build(leftNode, l, mid);
    build(rightNode, mid + 1, r);

    Tree[node] = merge(Tree[leftNode], Tree[rightNode],r-l+1);
}

void update(int node, int l, int r, int idx, int val)
{ 
    if(idx < l or idx > r) return;
 
    if(l == r)
    {
        Tree[node] = val;
        return;
    } 
    int mid = (l + r) / 2;
    int leftNode = (2*node), rightNode = (2*node)+1;

    update(leftNode, l, mid, idx, val);
    update(rightNode, mid + 1, r, idx, val);

    Tree[node] = merge( Tree[leftNode], Tree[rightNode],r-l+1);
}

  
int main()
{
  /* _Coder   : anmamun0
     _Created : 12 September 2024 ||  23:07:59
     _File    : D_Xenia_and_Bit_Operations.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q; input(n,q);
    n = (1<<n);

    for(int i = 1; i<=n; i++)cin>>v[i];
    build(1, 1, n);

    while(q--)
    {
        int idx, val; input(idx,val);
        update(1, 1, n, idx, val);
        cout << Tree[1] << endl;
    }

    checkmate 0;
}