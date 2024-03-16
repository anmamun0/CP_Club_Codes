#include <bits/stdc++.h>
#define ll long long
#define vector vector<ll> 
#define loop(i,s,n) for (int i = s; i <n; i++)
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector a(n), b(m);

    loop(i, 0, n) cin >> a[i];
    loop(i, 0, m) cin >> b[i];

    int i = 0, j = 0, ans = 0;

    while(i<n and j<m)
    {
        int curent = a[i];
        int x = 0, y = 0;

        while(a[i]==curent) i++,x++;
        
        while(curent >b[j] and j<m) j++;
        
        while(b[j]==curent) y++,j++;

        ans += (x * y);
    }
    
    cout << ans << '\n';


    return 0;
}