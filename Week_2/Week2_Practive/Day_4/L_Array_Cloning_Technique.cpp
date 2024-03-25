#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<int> 
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
    // _Created : 25 March 2024 ||  14:10:00
    // _File    : L_Array_Cloning_Technique.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vec v(n);

        int mx = INT_MIN;
        map<int, int> mp;

        loop(i,0,n)
        {
            cin >> v[i];
            mp[v[i]]++;
            mx = max(mp[v[i]], mx);
        }

        if(n==mx) cout << 0 << endl;
        else
        {
            int need = n - mx;
            while(mx<n)
            {
                mx *= 2;
                need++;
            }
            cout << need;
            enter;
        }
    }
 
    return 0;
}