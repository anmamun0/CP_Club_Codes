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

using namespace std;
int main()
{
    // _Author  : anmamun0
    // _Created : 24 March 2024 ||  22:37:21
    // _File    : B_7_Rings.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int valid = n * x;

        int flag = true;
        string s = to_string(valid);

        if(s.size() >5 or s.size() <5) flag = false;
        else if(s[0]=='0')flag = false;
    
        (flag) ? yes : no;
    }

    return 0;
}