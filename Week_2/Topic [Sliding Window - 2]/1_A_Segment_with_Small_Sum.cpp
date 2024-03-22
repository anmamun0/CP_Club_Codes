#include <bits/stdc++.h>
typedef long long ll;
#define vector vector<ll> 
#define loop(i,s,n) for (int i = s; i <n; i++)
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(),greater<>())
#define isEven(x) (x%2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"

using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 22
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n ;
    long long s;
    cin >> n >> s;
    vector a(n);
    loop(i, 0, n) cin >> a[i];

    long long sum = 0;
    int l = 0, r = 0, ans = 0;

    while(r<n)
    {
        sum += a[r];

        if(sum <= s)
        {
            ans = max(ans, r - l + 1);
        }
        else
        {
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << ans;
    enter;

    return 0;
}

/*
Question: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A

intput:
7 20
2 6 4 3 6 8 9

output:
4
*/