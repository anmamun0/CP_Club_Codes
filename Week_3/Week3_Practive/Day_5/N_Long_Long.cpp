#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<ll> 
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
void slove()
{
    int n;
    cin >> n;
    vec v(n);
    take_array(v, n - 1);

    ll sum = 0, op = 0;
    bool flag = false;
    in_range(i,0,n)
    {
        if(i<n)sum += abs(v[i]);
        if(flag)
        {
            if(i==n or v[i]>0)
            {
                op++;
                flag = false;
            }
        }
        else{
            if(v[i] < 0) flag = true;
        }
    }
    cout << sum << " " << op << ln;
}
e4
{
  /* _Coder   : anmamun0
     _Created : 03 April 2024 ||  19:20:40
     _File    : N_Long_Long.cpp

    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        slove();
    }

    checkmate;
}