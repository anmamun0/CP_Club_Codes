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
#define print3(a, b, c) cout << a << " " << b << " " << c << "\n"
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
     _Created : 04 June 2024 ||  21:38:23
     _File    : V_Nastia_and_Nearly_Good_Numbers.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;      cin >> T;
    while(T--)
    {
        ll a, b, x, y, z;
        cin >> a >> b;
        if(b == 1 )  no;
        else 
        {
            yes;
            if(b==2)
            { 
                if(a==1) print3(3, 1, 4); 
                else
                {
                    b *= a;
                    z = a * b;
                    x = a * (b - 1);
                    y = a;
                    print3(x, y, z);
                } 
            }
                else
                { 
                    z = a * b;
                    x = a * (b - 1);
                    y = a;
                    print3(x, y, z);
                } 
        }
    }

    checkmate;
}