#include <bits/stdc++.h>
typedef long long ll;
#define vector vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define isEven(x) (x % 2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"

using namespace std;
int main()
{
    // _User    : anmamun0
    // _Created : 22 March 2024 ||  00:14:16
    // _File    : F_Segments_with_Small_Spread.cpp
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k;
    cin >> n >> k;
    vector a(n);
    loop(i, 0, n) cin >> a[i];

    ll l = 0, r = 0, ans = 0;

    multiset<ll> ml;

    while (r < n)
    {
        ml.insert(a[r]);
        ll mn, mx;
        mn = *ml.begin(), mx = *ml.rbegin();
        if((mx-mn) <= k)
        {
            ans += (r - l + 1);
        }
        else{
            while(l<r)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if(mx-mn <= k)
                {
                    break;
                }
                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
            }

            mn = *ml.begin(), mx = *ml.rbegin();
            if((mx-mn) <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }

    cout << ans;
    enter;

    return 0;
}

/*

question: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F

input:
7 3
2 6 4 3 6 8 9
output:
16
*/