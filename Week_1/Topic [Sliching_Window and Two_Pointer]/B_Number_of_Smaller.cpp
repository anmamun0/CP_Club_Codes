#include <bits/stdc++.h>
#define ll long long
#define vector vector<int> 
#define loop(i,s,n) for (int i = s; i <n; i++)
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 14
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,m;
    cin >> n >> m;

    vector a(n), b(m);

    loop(i,0,n)
        cin >> a[i];

    loop(i,0,m)
        cin >> b[i];
    
    int l = 0, r = 0, ans = 0;

    while(r<m)
    {
        while(b[r] > a[l] and l<n)
        {
            ans++;
            l++;
        }
        r++;
        cout << ans << " ";
    }
    cout << '\n';

    return 0;
}
// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B