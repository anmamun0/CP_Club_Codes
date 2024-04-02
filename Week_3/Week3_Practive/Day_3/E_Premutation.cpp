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
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n - 1));
    map<int, int> mp;
    vec ans;

    loop(i,0,n)
    {
        loop(j,0,n-1)
        {
            cin >> v[i][j];
            if(v[i][n-2])mp[v[i][n-2]]++;
        }
    }
    map<int, int> mp1, indx;
    for (int i = 0; i < n; i++)
    {
        mp1[v[i][n - 2]]++;
        indx[v[i][n - 2]] = i;
    }
    int unic_val, non_unic_val;
    for(auto a:mp1)
    {
        if(a.second==1)unic_val = a.first;
        else non_unic_val = a.first;
    }

    vector<int> res;

    for (int i = 0; i < n - 1; i++)
    {
        res.push_back(v[indx[unic_val]][i]);
    }
    res.push_back(non_unic_val);

    for(int c:res)cout<<c<<" ";

    enter;
}
int main()
{
    // _Author  : anmamun0
    // _Created : 01 April 2024 ||  17:47:15
    // _File    : E_Premutation.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        slove();
    }

    return 0;
}