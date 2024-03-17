#include <bits/stdc++.h>
#define ll long long
#define vector vector<ll> 
#define loop(i,s,n) for (int i = s; i <=n; i++)
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 17
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    bool flag = false;

    loop(i,0,c)
    {
        loop(j,0,c)
        {
            if((a*i)+(b*j) == c)
                flag = true;
        }
    }
   (flag)?cout << "Yes\n": cout << "No\n";

    return 0;
}