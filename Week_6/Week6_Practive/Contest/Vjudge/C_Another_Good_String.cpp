#include <bits/stdc++.h>
typedef long long ll;
#define vl vector<ll> 
#define vi vector<int> 
#define in_range(i,s,n) for(int i=s; i<=n; i++)
#define in_range(i,s,n) for(int i=s; i<=n; i++)
#define in_range_back(i,s,n) for(int i=n ; i >= s; i--)
#define take_array(v,n) in_range(i,0,n) cin>>v[i]
#define print_array(v) for(auto c:v){cout<<c<<" ";}cout<<ln
#define erase_duplicates(x) x.erase(unique(all(x)),x.end());
#define cin2(a, b) cin >> a >> b;
#define cin3(a, b, c) cin >> a >> b >> c;
#define all(x) x.begin(),x.end()
#define all_0(x) memset(x,0,sizeof(x))
#define isEven(x) ((x&1)== 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"
#define ln '\n'
#define PQ priority_queue
#define Hashmap unordered_map
#define pb push_back
#define gcC int main()
#define checkmate return 0;
 
using namespace std;
// using namespace __gnu_pbds;
vector<string> Substrings( string& s) {
    vector<string> v;

    // Iterate over the string
    for (int i = 0; i < s.length(); ++i) {
        // Initialize the current substring with the current character
        string sub = string(1, s[i]);
        
        // Check if the substring is beautiful
        while (i + 1 < s.length() && s[i] == s[i + 1]) 
        {
            sub  += s[i + 1];
            ++i;
        }
        v.pb(sub);
    }
    return v;
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 29 April 2024 ||  22:51:07
     _File    : C_Another_Good_String.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin>>t;
    while(t--)
    {
        int n, q;
        string s;
        cin3(n, q, s);

        int mx = 0;
        vector<string> all_sub = Substrings(s);
        for (auto c : all_sub)
        {
            mx = max(mx, int(c.size()));
        }
        cout << mx << " ";
        while(q--)
        {
            char c; cin >> c;
            int sz = all_sub.size();
            if(c == all_sub[sz-1][0])
            {
                all_sub[sz - 1] += c;
                mx = max(mx, int(all_sub[sz - 1].size()));
            }
            else
            {
                string ex = "";
                ex += c;
                all_sub.pb(ex);
                mx = max(mx, int(all_sub[sz - 1].size()));
            }
            cout << mx << " ";
        }
        enter;
    }

    checkmate;
}