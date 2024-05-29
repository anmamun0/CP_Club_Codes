#include <bits/stdc++.h>
typedef long long ll;
#define vl vector<ll> 
#define vi vector<int> 
#define in_range(i,s,n) for(int i=s; i<=n; i++)
#define in_range(i,s,n) for(int i=s; i<=n; i++)
#define in_range_back(i,s,n) for(int i=n ; i >= s; i--)
#define take_array(v,n) in_range(i,0,n) cin>>v[i]
#define print_array(v) for(auto c:v){cout<<c<<" ";}cout<<ln
#define erase_duplicates(x) x.erase(unique(all(x)),x.end());
#define cin2(a, b) cin >> a >> b;
#define cin3(a, b, c) cin >> a >> b >> c;
#define all(x) x.begin(),x.end()
#define all_0(x) memset(x,0,sizeof(x))
#define isEven(x) ((x&1)== 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"
#define ln '\n'
#define PQ priority_queue
#define Hashmap unordered_map
#define pb push_back
#define gcC int main()
#define checkmate return 0;
 
using namespace std;
// using namespace __gnu_pbds;
int d[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int N, M;
int anmamun(vector<vector<int>>& grid, int x, int y) 
{
    int N = grid.size(), M = grid.size();
    vector<vector<int>> dis(N, vector<int>(M, INT_MAX));
    queue<pair<int, int>> q;

    // Initialize BFS from all guard positions
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) 
        {
            if (grid[i][j] == 1) 
            {
                q.push({i, j});
                dis[i][j] = 0;
            }
        }
    }

    // Perform BFS
    while (!q.empty()) 
    { 
        int x = q.front().first, y = q.front().second; q.pop();

        for (const auto& dir : d) 
        {
            int ci = x + dir[0], cj = y + dir[1];
            if (ci >= 0 && cj >= 0 && ci < N && cj < M && dis[ci][cj] == INT_MAX) 
            {
                dis[ci][cj] = dis[x][y] + 1;
                q.push({ci, cj});
            }
        }
    }

    // Return the dis for the specific prisoner cell
    return dis[x][y];
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 15 May 2024 ||  22:06:32
     _File    : PrisonEscape.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while(t--)
    {
        cin2(N, M);
        vector<vector<int>> grid(N, vector<int>(M, 0));
        for(int i = 0; i<N; i++)
        {
            for (int j = 0; j<M; j++)
            {
                cin >> grid[i][j];
            }
        }
        int mx = 0;

        for(int i = 0; i<N; i++)
        {
            for (int j = 0; j<M; j++)
            {
                int a = anmamun(grid, i, j);
                mx = max(a, mx);
            }
        }
        cout << mx << endl;
    }

    checkmate;
}

 