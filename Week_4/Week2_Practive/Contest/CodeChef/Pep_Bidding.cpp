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
     _Created : 10 April 2024 ||  21:14:59
     _File    : Pep_Bidding.cpp

    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int aA = 0, dA = 0;
        int aP = 0, dP = 0;

        in_range(i,0,n-1)
        {
            int x = 0;
            cin >> x;
            aA += x;
        }

        in_range(i,0,n-1)
        {
            int x = 0;
            cin >> x;
            dA += x;
        }

        in_range(i,0,n-1)
        {
            int x = 0;
            cin >> x;
            aP += x;
        }
        in_range(i,0,n-1)
        {
            int x = 0;
            cin >> x;
            dP += x;
        }
        if(aA>aP and dA>dP)
        {
            cout << "A" << ln;
        }
        else if(aP>aA and dP>dA)
        {
            cout << "P" << ln;
        }
        else
            cout << "DRAW" << ln;
    }

    checkmate;
}