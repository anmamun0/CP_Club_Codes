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

    int n;
    cin >> n;
    vector v(n);

    ll sum = 0;
    loop(i, 0, n)
    {
        cin >> v[i];
        sum += v[i];
    }

    if(sum%2==1)
    {
        sort(v);
        loop(i,0,n)
        {
            ll nextsum = sum - v[i];
            if(nextsum%2==0)
            {
                sum = nextsum;
                break;
            }
        }
    }
    cout << sum << "\n";
   
    return 0;
}