#include <bits/stdc++.h>
typedef long long ll;
#define vector vector<ll> 
#define for(i,s,n) for (int i = s; i <=n; i++)
#define sort(v) sort(v.begin(), v.end())
#define isEven(x) (x%2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"

using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 19
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, y;
    cin >> x >> y;
    int cnt = 0;
    
    while(x<=y) x *= 2,cnt++;

    cout << cnt ;
    enter;

    return 0;
}