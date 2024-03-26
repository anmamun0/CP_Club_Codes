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
    // _Created : 26 March 2024 ||  00:29:54
    // _File    : N_Chemistry.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, way;
        string s;
        cin >> n >> way >> s;
        
        map<char,int>mp;
        for(auto c:s)mp[c]++;

        int ans = 0;
        for(auto i:mp) ans += i.second % 2;
        (ans <= way + 1) ? yes : no;
    }


    return 0;
}