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
#define ln '\n'

using namespace std;
int main()
{
    // _Author  : anmamun0
    // _Created : 27 March 2024 ||  18:43:45
    // _File    : A_Segment_with_Small_Sum.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;
    vec v(n);
    loop(i, 0, n) cin >> v[i];

    ll l = 0, r = 0, sum = 0, len = 0;
    while(r<n)
    {
        sum += v[r];

        if(sum<=s) len = max(len, (r - l + 1));
        else
        {
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << len << ln;
    return 0;
}