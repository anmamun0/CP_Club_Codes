#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<string> 
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
    // _Created : 23 March 2024 ||  15:44:58
    // _File    : H_Most_Similar_Words.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int word, len;
        cin >> word >> len;
        vec v(word);
        loop(i,0,word) cin >> v[i];
 
        int ans = INT_MAX;

        for (int i = 0; i < v.size()-1; i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                int cnt = 0;
                for (int k = 0; k<len; k++)
                {
                    int c = abs(v[i][k] - v[j][k]);
                    cnt += c;
                }
                ans = min(cnt, ans);
            }
        }
        cout << ans;
        enter;
    }
    return 0;
 
    return 0;
}