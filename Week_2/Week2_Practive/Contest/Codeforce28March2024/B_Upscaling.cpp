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
    // _Created : 28 March 2024 ||  20:51:58
    // _File    : B_Upscaling.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= 2 * n; i++)
        {
            for (int j = 1; j <=n; j++)
            {   
                if ((((i % 4 == 1) or (i%4==2) ) && j % 2 == 1) or ((((i % 4 == 3) or (i%4==0) ) && j % 2 == 0) )) cout << "##";
                else cout<<"..";
            }
            enter;
        }
    }

    return 0;
}