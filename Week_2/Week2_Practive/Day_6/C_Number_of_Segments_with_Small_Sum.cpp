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
    // _Created : 27 March 2024 ||  19:00:49
    // _File    : C_Number_of_Segments_with_Small_Sum.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n, s;
    cin >> n >> s;
    vec v(n);
    loop(i, 0, n) cin >> v[i];

    ll l = 0, r = 0, sum = 0, cnt = 0;

    while(r<n)
    {
        sum += v[r];

        if(sum<=s)
        {
            cnt += (r - l + 1);
        }
        else
        {
            while(sum>s)
            {
                sum -= v[l];
                l++;
            }
            if(sum <=s) cnt+= (r-l+1);
        }
        r++;
    }
    cout << cnt << ln;

    return 0;
}