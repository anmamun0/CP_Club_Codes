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
    // _Created : 23 March 2024 ||  15:06:33
    // _File    : F_Cypher.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vec a(n);
        loop(i, 0, n) cin >> a[i];

        vector<pair<int, string>> s(n);
        loop(i,0,n) cin >> s[i].first >> s[i].second;

        loop(i,0,n)
        {
            int ans = 0;
            for (int j = 0; j < s[i].first; j++)
            {
                if(s[i].second[j]=='D')
                {   
                    if(a[i]==9) a[i]=0;
                    else a[i]++;
                }
                else if(s[i].second[j]=='U')
                {   
                    if(a[i] == 0) a[i] = 9;
                    else a[i]--;
                }
            }
            cout << a[i] << " ";
        }
        enter;
    }

    return 0;
}

// _End Time : 23 March 2024 ||  15:20:39