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
void slove()
{
    ll n;
    cin >> n;
    priority_queue<ll> pq;
    ll army = 0;

    loop(i,0,n)
    {
        ll c;
        cin >> c;
        if(c!=0)pq.push(c);
        else if(c==0 and !pq.empty())
        {
            army += pq.top();
            pq.pop();
        }
    }
    cout << army << ln;
}
int main()
{
    // _Author  : anmamun0
    // _Created : 02 April 2024 ||  00:45:08
    // _File    : H_Powering_the_Hero_easy_version.cpp
    
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