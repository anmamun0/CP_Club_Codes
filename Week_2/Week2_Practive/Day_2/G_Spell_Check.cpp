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

using namespace std;
int main()
{
    // _Author  : anmamun0
    // _Created : 23 March 2024 ||  17:24:44
    // _File    : G_Spell_Check.cpp

    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    map<char, int> mp;
    string s = "Timur";

    for (auto c : s) mp[c]++;
    while (t--)
    {
       int n;
        cin >> n;
        string name;
        cin >> name;

        map<char, int> w;
        bool flag = true;

        for (auto c : name) w[c]++;

        for (auto c : name)
        {
            if (w[c] != mp[c])
            {
                flag = false;
                break;
            }
        }
        for (auto c : s)
        {
            if (w[c] != mp[c])
            {
                flag = false;
                break;
            }
        }
        (flag) ? yes : no;
    }

    return 0;
}

