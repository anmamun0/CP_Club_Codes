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
gcC
{
  /* _Coder   : anmamun0
     _Created : 22 April 2024 ||  22:25:17
     _File    : C_Decode_String.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;      cin>>t;

    while(t--)
    {
        ll n;       string s;      cin2(n, s);
        string ans = ""; 
        int i = n-1;

        while(i>=0)
        {
            if(s[i]=='0')
            {
                string k = s.substr(i - 2, 2);
                i -= 3;
                char c = char((stoi(k) - 1) + 'a');
                ans += c; 
            }
            else
            {
                char k = s[i];
                char c = char(int(s[i])+48);
                ans += c; 
                i--;
            }
        }
        reverse(begin(ans), end(ans));
        cout << ans << endl;
    }

    checkmate;
}


 
