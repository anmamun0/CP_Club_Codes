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

using namespace std;
int main()
{
    // _Author  : anmamun0
    // _Created : 24 March 2024 ||  15:20:51
    // _File    : K_Move_Brackets.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--)
    {
        int n, cnt = 0;
        string s;
        cin >> n >> s;

        stack<char> st;
        
        loop(i,0,n)
        {
            if(!st.empty() and st.top()=='(' and s[i]==')')
            {
                cnt++;
                st.pop();
            }
            else st.push(s[i]);
        }

        int ext = n - cnt * 2;
        cout << ext/2;
        enter;
    }

    return 0;
}