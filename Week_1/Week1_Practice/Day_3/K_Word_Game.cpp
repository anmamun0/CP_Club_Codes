#include <bits/stdc++.h>
#define ll long long
#define vector vector<string> 
#define loop(i,s,n) for (int i = s; i <n; i++)
#define sort(v) sort(v.begin(), v.end())
using namespace std;
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 17
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int word;
        cin >> word;

        vector a(word), b(word), c(word);
        map<string, int> mp;

        loop(i, 0, word) cin >> a[i],mp[a[i]]++;
        loop(i, 0, word) cin >> b[i],mp[b[i]]++;
        loop(i, 0, word) cin >> c[i],mp[c[i]]++;
        
        int fast = 0, second = 0, third = 0;

        for(auto w:a)
        {
            if(mp[w]==2) fast++;
            else if(mp[w]==1) fast += 3;
        }
        for(auto w:b)
        {
            if(mp[w]==2) second++;
            else if(mp[w]==1) second += 3;
        }
        for(auto w:c)
        {
            if(mp[w]==2) third++;
            else if(mp[w]==1) third += 3;
        }
        cout << fast << " " << second << " " << third << '\n';
    }

    return 0;
}


