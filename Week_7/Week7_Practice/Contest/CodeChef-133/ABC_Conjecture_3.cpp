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
     _Created : 08 May 2024 ||  22:04:00
     _File    : ABC_Conjecture_3.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;      cin>> t;
    while(t--)
    {
        int n; string s; cin2(n, s);
        int total_a = 0 , curr_a = 0, ans = 0;
        bool b = false;

        for (int i = 0; i<n; i++)
        {
            if (s[i] == 'a') curr_a++;
            else if (s[i] == 'b')
            {
                total_a += curr_a;
                b = true;
                curr_a = 0;
            }
            else
            {
                if(b==true)
                {
                    if(total_a==0)
                    {
                        b = 0;
                        continue;
                    }
                    else 
                    {
                        ans++;
                        total_a--;
                    }
                }
            }
        } 
    } 
    checkmate;
}