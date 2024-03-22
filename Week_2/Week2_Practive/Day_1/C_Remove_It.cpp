#include <bits/stdc++.h>
typedef long long ll;
#define vector vector<ll> 
#define loop(i,s,n) for (ll i = s; i <n; i++)
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
    // _Created : 22 March 2024 ||  15:26:47
    // _File    : C_Remove_It.cpp
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, cross;
    cin >> n >> cross;
    vector v;

    loop(i,0,n)
    {
        int a = 0;
        cin >> a;
        if(a != cross)
            v.push_back(a);
    }
    for(auto c:v)
        cout << c << " ";
    enter;

    return 0;
}

// _End Time : 22 March 2024 ||  15:28:20