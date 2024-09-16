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
using namespace std;

const int N = 1e3 + 10;
int n, m;
string s[N];
bool f[256];
int dp[N][5], val[N][5], ed[N][5];
string t = "narek";

void solve() {
 cin >> n >> m;
 for (int i = 1; i <= n; i++) cin >> s[i];
 for (int i = 0; i <= n; i++) {
  for (int j = 0; j < 5; j++) dp[i][j] = -1e9;
 }
 for (int i = 1; i <= n; i++) {
  for (int st = 0; st < 5; st++) {
   int x = st;
   int d = 0;
   for (char c: s[i]) if (f[c]) {
    if (c == t[x]) x = (x + 1) % 5, d++;
    else d--;
   }
   val[i][st] = d;
   ed[i][st] = x;
  }
 }
 dp[0][0] = 0;
 for (int i = 1; i <= n; i++) {
  for (int j = 0; j < 5; j++) {
   dp[i][ed[i][j]] = max(dp[i][ed[i][j]], dp[i - 1][j] + val[i][j]);
   dp[i][j] = max(dp[i][j], dp[i - 1][j]);
  }
 }
 int res = 0;
 for (int i = 0; i < 5; i++) res = max(res, dp[n][i] - i - i);
 cout << res << '\n';
}

 
int main()
{
  /* _Coder   : anmamun0
     _Created : 14 September 2024 ||  22:24:45
     _File    : C_Lazy_Narek.cpp 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for (char c : t) f[c] = 1;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    checkmate 0;
}