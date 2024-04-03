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
    // _Created : 02 April 2024 ||  22:44:40
    // _File    : C_Dracula_Eats.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int extra = n % 7;
        int waiting = n / 7;
        if(extra>1)
            waiting++;
        cout << waiting << endl;
    }

    return 0;
}