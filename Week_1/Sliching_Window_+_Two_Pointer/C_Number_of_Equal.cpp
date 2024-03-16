#include <bits/stdc++.h>
#define ll long long
#define vector vector<ll> 
#define loop(i,s,n) for (int i = s; i <n; i++)
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 14
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector a(n), b(m);

    loop(i, 0, n) cin >> a[i];
    loop(i, 0, m) cin >> b[i];

    int l = 0, r = 0;
    ll ans = 0;

    while(l<n and r<m)
    {
        int cnt1 = 0, cnt2 = 0, curr = a[l];

        //fast arry curr value count
        while(a[l]==curr and l<n)
        {
            cnt1++;
            l++;
        }

        //corner case bay-pass
        while(curr>b[r] and r<m)
        {
            r++;
        }

        //second arry curr value count
        while(b[r]==curr and r<m)
        {
            cnt2++;
            r++;
        }
        ans += (1LL* cnt1 * cnt2);
    }
    cout << ans<<'\n';

    return 0;
}

// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C