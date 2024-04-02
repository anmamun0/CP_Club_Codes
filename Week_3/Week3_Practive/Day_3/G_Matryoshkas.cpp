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
void slove()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    vec v(n);
    loop(i,0,n)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    asort(v);
    ll len = 0;

    for (auto c:v)
    {
        if(mp[c]>0)
        {
            ll cnt = 0;
            ll go = c;
            while(mp[go] > 0)
            {
                mp[go]--;
                go++;
                cnt++;
            }
            if(cnt>0)len++;
        }
    }
    cout << len << ln;
}
int main()
{
    // _Author  : anmamun0
    // _Created : 01 April 2024 ||  23:45:15
    // _File    : G_Matryoshkas.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin>>t;
    while(t--)
    {
        slove();
    }
 
    return 0;
}