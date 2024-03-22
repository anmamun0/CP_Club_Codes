#include <bits/stdc++.h>
typedef long long ll;
#define vector vector<string> 
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
    // _User    : anmamun0
    // _Created : 22 March 2024 ||  15:58:18
    // _File    : H_Most_Similar_Words.cpp
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {

        int word, len;
        cin >> word >> len;

        vector v(word);
        loop(i,0,word) cin >> v[i];
        asort(v);

        int cnt = 0;
        for (int i = 0; i < len; i++)
        {
            int c = abs(v[0][i] - v[1][i]);
            cnt += c;
        }
        cout << cnt;
        enter;

        
    }
    

    return 0;
}