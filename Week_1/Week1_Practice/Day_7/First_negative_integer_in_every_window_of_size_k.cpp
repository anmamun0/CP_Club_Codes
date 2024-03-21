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
vector printFirstNegativeInteger(ll A[], ll N, ll K)
{
    int l = 0, r = 0;
    vector ans;

    while (r < N)
    {
        if ((r - l + 1) == K)
        {
            vector negative;
            for(int i = l; i<=r; i++) 
            {
                if(A[i]<0)
                {
                    negative.push_back(A[i]);
                    break;
                }
            }
            if (negative.empty()) ans.push_back(0);
            else ans.push_back(negative[0]);  
            l++;
        }

        else r++;
    }
    return ans;
}
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 21
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll arr[n];
    loop(i, 0, n) cin >> arr[i];

    ll k;
    cin >> k;

    vector ans = printFirstNegativeInteger(arr, n, k);
    for (auto it : ans) cout << it << " ";
    enter;

    return 0;
}

//https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1