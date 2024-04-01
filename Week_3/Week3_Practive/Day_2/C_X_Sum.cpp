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
int n, m;
bool valid(int x, int y)
{
    if(x == -1 or y == -1 or x == n or y == m)
        return false;
    return true;
}
int main()
{
    // _Author  : anmamun0
    // _Created : 01 April 2024 ||  14:32:56
    // _File    : C_X_Sum.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--)
    {
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        loop(i, 0, n) { loop(j, 0, m) cin >> v[i][j]; }

        int mx = 0;

        for (int i = 0; i < n;i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x = i, y = j;
                int sum = 0;
                // Top right -> 
                while (valid(x, y)) sum += v[x--][y--];

                //Bottom right->
                x = i, y = j, x++, y++;

                while (valid(x, y)) sum += v[x++][y++];

                // top left -> 
                x = i, y = j, x--, y++;
                while (valid(x, y)) sum += v[x--][y++];
 
                x = i, y = j, x++, y--;
                while (valid(x, y)) sum += v[x++][y--];
                
                mx = max(sum, mx);
            }
        }
        cout << mx << ln;
    }
    return 0;
}