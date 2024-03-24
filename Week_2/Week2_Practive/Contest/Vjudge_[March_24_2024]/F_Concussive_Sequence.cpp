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
    // _Created : 24 March 2024 ||  23:18:59
    // _File    : F_Concussive_Sequence.cpp

    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vec v(n);
        loop(i, 0, n) cin >> v[i];

        for (int i = 1; i < n; i += 2) if (v[i] <= v[i + 1]) swap(v[i], v[i + 1]);

        bool flag = true;
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i - 1] >= v[i] and v[i] >= v[i + 1])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            for (auto c : v)  cout << c << " ";
            enter;
        }
        else cout<<-1<<endl;
    }

    return 0;
}