#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<ll> 
#define loop(i,s,n) for (int i = s; i <=n; i++)
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(),greater<>())
#define isEven(x) (x%2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"

using namespace std;
int main()
{
    // _Author  : anmamun0
    // _Created : 24 March 2024 ||  15:06:36
    // _File    : B_Sum_of_Three_Integers.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, s, cnt = 0;
    cin >> k >> s;

    loop(i,0,k)
    {
        loop(j,0,k)
        {
            int c = s - i - j;
            if(c>=0 and c<=k) cnt++;
        }
    }

    cout << cnt;
    enter;

    return 0;
}
// _End Time : 24 March 2024 ||  15:11:16