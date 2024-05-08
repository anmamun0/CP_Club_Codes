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
int slove(int n, string s) 
{ 
    vector<bool> chack(n, false);

    vector<int> v(3, 0);

    for (char c : s) 
    {
        if (c == 'a') v[0]++;
        else if (c == 'b') v[1]++;
        else v[2]++;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' and !chack[i])
        {
            int b = false;
            for (int k = i + 1; k < n; k++)
            {
                if (s[k] == 'b' and !chack[k]) b = true;

                if (b and s[k] == 'c' and !chack[k])
                {
                    if (v[0] < v[2])
                    {
                        v[0]--;
                        chack[k] = true;
                        cnt++;
                    }
                    else
                    {
                        v[2]--;
                        chack[k] = true;
                        cnt++;
                    }
                    break;
                }
            }
        }
    }
    return cnt;
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 08 May 2024 ||  22:04:00
     _File    : ABC_Conjecture_3.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;      cin>> t;
    while(t--)
    {
        int n; string s; cin2(n, s);
        cout << slove(n, s)<<endl;
    }

    checkmate;
}