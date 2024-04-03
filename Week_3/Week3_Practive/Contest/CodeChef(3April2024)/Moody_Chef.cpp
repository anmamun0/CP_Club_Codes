#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<int> 
#define in_range(i,s,n) for(int i=s; i<=n; i++)
#define in_range_back(i,s,n) for(int i=n-1; i >= s; i--)
#define take_array(v,n) in_range(i,0,n) cin>>v[i]
#define print_array(v) for(auto c:v){cout<<c<<" ";}cout<<ln
#define erase_duplicates(x) x.erase(unique(all(x)),x.end());
#define cin2(a, b) cin >> a >> b;
#define cin3(a, b, c) cin >> a >> b >> c;
#define all(x) x.begin(),x.end()
#define all_0(x) memset(x,0,sizeof(x))
#define isEven(x) (x%2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"
#define ln '\n'
#define PQ priority_queue
#define Hashmap unordered_map
#define pb push_back
#define e4 int main()
#define checkmate return 0;
 
using namespace std;
e4
{
  /* _Coder   : anmamun0
     _Created : 03 April 2024 ||  20:43:10
     _File    : Moody_Chef.cpp

    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, l, r;
        cin3(n, l, r);

        vec v(n);
        int mn = INT_MAX;
        int mx = 0;
        int happy = 0;
        int sad = 0;
        in_range(i,0,n-1)
        {
            cin >> v[i];
            mx = max(happy, mx);
            mn = min(happy, mn);
            if(v[i]>=l and v[i]<=r) happy++;
            else  happy--;
            
            mx = max(happy, mx);
            mn = min(happy, mn);
        }
        if(mn==INT_MAX) cout << mx << " " <<  0   << endl;
        else  cout << mx << " " <<  mn  << endl;
    }

    checkmate;
}