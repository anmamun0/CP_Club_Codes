#include <bits/stdc++.h>
typedef long long ll;
#define vector vector<ll> 
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
    // _Created : 22 March 2024 ||  15:51:22
    // _File    : D_Minor_Change.cpp
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s,t;
    cin>>s>>t;

    int cnt = 0;
    loop(i,0,s.size()) if(s[i] != t[i]) cnt++;
    
    cout << cnt;
    enter;

    return 0;
}

// _End Time : 22 March 2024 ||  15:52:27