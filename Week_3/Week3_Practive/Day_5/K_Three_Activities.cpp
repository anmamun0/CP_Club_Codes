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
int find(priority_queue<pair<ll,ll>> a, priority_queue<pair<ll,ll>>b, priority_queue<pair<ll,ll>>c)
{
    map<ll, int> crack;
    ll ans = 0;
    while(!a.empty())
    {
        if(crack[a.top().second]<1)
        {
            ans += a.top().first;
            crack[a.top().second]++;
            break;
        }
        a.pop();
    }
    while(!b.empty())
    {
        if(crack[b.top().second]==0)
        {
            ans += b.top().first;
            crack[b.top().second]++;
            break;
        }
        b.pop();
    }
    while(!c.empty())
    {
        if(crack[c.top().second] == 0)
        {
            ans += c.top().first;
            crack[c.top().second]++;
            break;
        }
        c.pop();
    }
    return ans;
}
void slove()
{
    int n;
    cin >> n;
    priority_queue<pair<ll, ll>> ski, movie, game;
    for (int i = 0; i < n;i++)
    {
        int v;
        cin >> v;
        ski.push({v, i});
    }
    for (int i = 0; i < n;i++)
    {
        int v;
        cin >> v;
        movie.push({v, i});
    }
     for (int i = 0; i < n;i++)
    {
        int v;
        cin >> v;
        game.push({v, i});
    }
    int mx = 0;
    vector<int> v = {1, 2, 3};
    vector<ll> ans;

    do{
        int result = find(
            v[0] == 1 ? ski : (v[0] == 2 ? movie : game),
            v[1] == 1 ? ski : (v[1] == 2 ? movie : game),
            v[2] == 1 ? ski : (v[2] == 2 ? movie : game));
        ans.push_back(result);

    } while (next_permutation(v.begin(), v.end()));
    rsort(ans);

    cout << ans[0] << ln;
}
int main()
{
    // _Author  : anmamun0
    // _Created : 02 April 2024 ||  14:04:58
    // _File    : K_Three_Activities.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--)
    {
        slove();
    }

    return 0;
}