#include <bits/stdc++.h>
typedef long long ll;
#define vector vector<ll> 
#define loop(i,s,n) for (int i = s; i <n; i++)
#define asort(v) sort(v.begin(), v.end())
#define isEven(x) (x%2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"

using namespace std;
void slove()
{
    int n;
    char p;
    string s;
    cin >> n >> p >> s;
    s.append(s);
    int ans=0;

    if(p =='g') ans = 0;
    else 
    {
        int i = 0;
        while(i<n)
        {
            if(s[i]==p)
            {
                for(int j = i+1; j<2*n; j++)
                {
                    if(s[j]=='g')
                    {
                        ans = max(ans, j - i), i = j;
                        break;
                    }
                }
            }
            i++;
        }
    }
    cout << ans;
    enter;
}
int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--)
    {
        slove();
    }
 
    return 0;
}