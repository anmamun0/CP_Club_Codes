#include <bits/stdc++.h>
#define ll long long
#define vector vector<ll> 
#define loop(i,s,n) for (int i = s; i <n; i++)
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7 , 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s = to_string(n), ans = "";

    loop(i, 0, (4 - s.size())) ans += '0';

    ans += s;
    cout << ans << endl;

    return 0;
}
