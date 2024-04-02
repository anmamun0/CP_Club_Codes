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
int main()
{
    // _Author  : anmamun0
    // _Created : 01 April 2024 ||  21:22:27
    // _File    : F_Line.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        ll sum = 0;
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='L')sum+=i;
            else if(s[i]=='R') sum +=(n-i-1);
        }
        vec ans;
        for(int i =0; i<n; i++)
        {
            if(s[i]=='L')
            {
                ll ch = ((n - i - 1) - i);
                if(i < (n-i-1)) {ans.push_back(ch);}
            }
            else
            {
                ll ch = (i - (n - i - 1));
                if( i > (n-i-1)) {ans.push_back(ch);}
            }
        }
        rsort(ans);
        for (int i = 0; i < n; i++)
        {
            if(i<ans.size()) sum += ans[i];
            cout << sum << " ";
        }
        enter;
    }

    return 0;
}