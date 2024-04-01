#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define isEven(x) (x % 2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"
#define ln '\n'

using namespace std;
int main()
{
    // _Author  : anmamun0
    // _Created : 01 April 2024 ||  15:08:57
    // _File    : D_Double_Strings.cpp

    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> s(n);
        map<string, int> mp;
        loop(i, 0, n)
        {
            cin >> s[i];
            mp[s[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            bool ans = false;
            for (int k = 0; k < s[i].size(); k++)
            {
                string word = s[i];
                int len = word.size();
                string l = word.substr(0, k);
                string r = word.substr(k, len);
                
                if (mp[l] != 0 and mp[r] !=0 )
                {
                    ans = true;
                    break;
                }
            }
            cout << ans;
        }
        enter;
    }
        return 0;
    }