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
    // _Created : 28 March 2024 ||  20:47:38
    // _File    : A_Stair_Peak_or_Neither.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(b>a and c>b)cout<<"STAIR"<<ln;
        else if(b>a and b>c)cout<<"PEAK"<<ln;
        else cout<<"NONE"<<ln;
    }
 
    return 0;
}