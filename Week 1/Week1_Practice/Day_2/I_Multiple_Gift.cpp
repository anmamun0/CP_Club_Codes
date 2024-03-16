#include <bits/stdc++.h>
#define ll long long
#define vector vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, y;
    cin >> x >> y;

    int gift = 0;

    int take = y;
    while (take!=0)
    {
        // cout << take << " ";
        take /= x;
    }

    cout << y/x << '\n';
    return 0;
}