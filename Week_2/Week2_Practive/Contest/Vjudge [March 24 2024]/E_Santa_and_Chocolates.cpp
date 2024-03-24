#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<ll> 
#define loop(i,s,n) for (int i = s; i <n; i++)
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(),greater<>())
#define isEven(x) (x%2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"

using namespace std;
int main()
{
    // _Author  : anmamun0
    // _Created : 24 March 2024 ||  23:41:52
    // _File    : E_Santa_and_Chocolates.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vec v(n);
        int total = 0;

        loop(i, 0, n)
        {
            cin >> v[i];
            total += v[i];
        }
        
        int doubel = n / 2, single = n - (n / 2);
        
        if(total==n) yes;
        else 
        {
            while(total>0)
            {
                total -= single;
                total -= (doubel * 2);
            }
            (total == 0) ? yes : no;
        }
    }
    return 0;
}