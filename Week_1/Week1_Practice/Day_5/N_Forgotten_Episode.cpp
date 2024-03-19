#include <bits/stdc++.h>
typedef long long ll;
#define vector vector<ll> 
#define for(i,s,n) for (int i = s; i <n; i++)
#define sort(v) sort(v.begin(), v.end())
#define isEven(x) (x%2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<int, int> mp;
    for(i,0,n)
    {
        int a;
        cin >> a;
        mp[a]++;
    }

    int miss = n;
    for(i,1,n)
    {
        if(mp[i]==0)
        {
            miss = i;
            break;
        }
    }
    cout << miss;
    enter;

    return 0;
}