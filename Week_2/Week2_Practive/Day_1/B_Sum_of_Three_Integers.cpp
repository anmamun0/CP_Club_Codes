#include <bits/stdc++.h>
typedef long long ll;
#define vector vector<ll> 
#define loop(i,s,n) for (ll i = s; i <=n; i++)
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(),greater<>())
#define isEven(x) (x%2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"

using namespace std;
int main()
{
    // _User    : anmamun0
    // _Created : 22 March 2024 ||  14:56:53
    // _File    : B_Sum_of_Three_Integers.cpp
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, s, cnt = 0;
    cin >> x >> s;

    loop(i,0,x)
    {
        loop(j,0,x)
        {
            loop(k,0,x) if(i+j+k == s) cnt++;
        }
    }
    cout << cnt;
    enter;

    return 0;
}

// _End Time : 22 March 2024 ||  15:04:11