#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<ll> 
#define loop(i,s,n) for (ll i = s; i <n; i++)
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(),greater<>())
#define isEven(x) (x%2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"
#define ln '\n'

using namespace std;
int main()
{
    // _Author  : anmamun0
    // _Created : 29 March 2024 ||  20:06:36
    // _File    : B_Odd_Queries.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        int n, time;
        cin >> n >> time;
        vec v(n),p(n),s(n);
        loop(i, 0, n) cin >> v[i];

        p[0] = v[0];
        loop(i, 1, n) p[i] = p[i - 1] + v[i];

        s[n - 1] = v[n - 1];
        for (ll i = n - 2; i >= 1; i--) s[i] = s[i+1]+v[i];


        while(time--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            l--;
            r--;

            ll sum = ((r - l) + 1) * k;
            sum += p[n - 1] - p[r];

            if(l>0)
            {
                l--;
                sum += p[l];
            }
            (sum % 2 == 1) ? yes : no;
        }
    }
    return 0;
}