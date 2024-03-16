#include <bits/stdc++.h>
#define ll long long
#define vector vector<ll> 
#define loop(i,s,n) for (int i = s; i <n; i++)
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 15
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    (a < b) ? cout << (b - a) + 1 << '\n' : cout << 0 << '\n';

    return 0;
}