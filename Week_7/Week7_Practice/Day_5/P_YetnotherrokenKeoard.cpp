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
     _Created : 27 May 2024 ||  15:58:00
     _File    : P_YetnotherrokenKeoard.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;      cin >> T;
    while(T--)
    {
        string s;      cin >> s;
        int n = s.size();
        
        vector<int> elder, younger;
        vector<bool> op(n,true);
 
        for (int i = 0; i < n; i++)
        {
            if(s[i]== 'B' and !elder.empty())
            {
                op[elder.back()]= false;
                op[i] = false;
                elder.pop_back();
                continue;
            }
            if(s[i]=='b' and !younger.empty())
            {
                op[younger.back()] = false;
                op[i] = false;
                younger.pop_back();
                continue;
            }
            if(s[i]=='B' or s[i]=='b')
            {
                op[i] = false;
                continue;
            }

            if(isupper(s[i])) elder.pb(i);
            if(islower(s[i])) younger.pb(i);
        }
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if(op[i])ans+=s[i];
        }
        cout << ans << "\n";
    }

    checkmate;
}