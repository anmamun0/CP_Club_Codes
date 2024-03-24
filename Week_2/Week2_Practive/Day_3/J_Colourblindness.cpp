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
    // _Created : 24 March 2024 ||  15:12:33
    // _File    : J_Colourblindness.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        loop(i,0,n)
        {
            if((a[i]=='G' and b[i]=='B') or (a[i]=='B' and b[i]=='G'))
            {
                a[i] = 'G';
                b[i] = 'G';
            }
        }
        (a == b) ? yes : no;
    }

    return 0;
}