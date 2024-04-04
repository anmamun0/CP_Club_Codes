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
    // _Created : 01 April 2024 ||  19:25:18
    // _File    : R_Remove_Prefix.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        vec v(n);
        loop(i, 0, n) cin >> v[i];

        map<int, int> mp;
        vec ans;

        for (int i = n - 1; i >= 0; i--)
        {
            mp[v[i]]++;
            if(mp[v[i]]==2)break;
            ans.push_back(v[i]);
        }
        cout << v.size() - ans.size()<<ln;
    }

    return 0;
}