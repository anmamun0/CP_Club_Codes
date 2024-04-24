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
     _Created : 23 April 2024 ||  21:12:15
     _File    : B_CodeChef_Streak.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;

        vl Om(n), Addy(n);      take_array(Om,n-1); take_array(Addy,n-1);

        ll om_max_stack = 0, addy_max_stack= 0;
        ll l = 0, r = 0;
        while(r<n)
        {
            if(Om[r] == 0 or r==n-1)
            {
                ll size = r - l + 1;
                if(Om[r]== 0) size--;

                om_max_stack = max(om_max_stack, size);
                l = r + 1;
            }
            r++;
        }
       
        l = 0, r = 0;
        while(r<n)
        {
            if(Addy[r] == 0 or r==n-1)
            {
                ll size = r - l + 1;
                if(Addy[r]== 0) size--;

                addy_max_stack = max(addy_max_stack, size);
                l = r + 1;
            }
            r++;
        }
        
        if(om_max_stack > addy_max_stack)  cout << "Om\n";
        else if(om_max_stack < addy_max_stack) cout << "Addy\n";
        else cout << "Draw\n";
    }

    checkmate;
}