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
     _Created : 12 June 2024 ||  13:15:59
     _File    : E_String_Reversal.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; string s;
    input(n,s);

    string r = s;
    reverse(all(r));

    map<char, vector<int>> pos_s, pos_r;

    for (int i = 0; i < n; i++)
    {
        pos_s[s[i]].pb(i);
        pos_r[r[i]].pb(i);
    }


    vector<int> permitaion(n); // 3 1 5 2 4 0
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int i = 0; i < pos_s[ch].size(); i++)
        {
            permitaion[pos_r[ch][i]] = pos_s[ch][i];
        }
    }

    pbds<int> p;
    ll ans = 0;
    for(int i = n-1; i>=0; i--)
    {
        ans += p.order_of_key(permitaion[i]); 
        p.insert(permitaion[i]);
    }  
    print(ans, "\n");

    checkmate;
}