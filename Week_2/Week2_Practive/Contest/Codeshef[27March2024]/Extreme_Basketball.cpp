#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<ll> 
#define loop(i,s,n) for (int i = s; i <n; i++)
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(),greater<>())
#define isEven(x) (x%2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"
#define ln '\n'

using namespace std;
int main()
{
    // _Author  : anmamun0
    // _Created : 27 March 2024 ||  20:47:27
    // _File    : Extreme_Basketball.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;

        int two = 0, three = 0;

        int x = a;
        while((x-b)<10)
        {
            x += 2;
            two++;
        }

        int y = a;
        while((y-b)<10)
        {
            y += 3;
            three++;
        }
        cout << min(two,three)<<ln;
    }

    return 0;
}