#include <bits/stdc++.h>
#define ll long long
#define vector vector<ll> 
#define loop(i,s,n) for (int i = s; i <=n; i++)
#define sort(v) sort(v.begin(), v.end())
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define enter cout << "\n"

using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector v(n+1);
        loop(i, 1, n) cin >> v[i];

        ll indx = 1, cnt = 0;

        loop(i,1,n)
        {
            if(v[i] > indx)
            {
                cnt += v[i] - indx;
                indx = v[i]+1;
            }
            
            else indx++;
        }
        cout << cnt;
        enter;
    }

    return 0;
}