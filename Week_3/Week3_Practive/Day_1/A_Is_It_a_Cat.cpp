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
    // _Created : 29 March 2024 ||  19:32:52
    // _File    : A_Is_It_a_Cat.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string result="";
        string chack = "meow";

        loop(i,0,n)
        {
            s[i] = tolower(s[i]);
            s[i+1] = tolower(s[i+1]);
            if(s[i] != s[i+1]) result+=s[i];
        }
        (result==chack)?yes:no;
    }

    return 0;
}
