#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<ll> 
#define in_range(i,s,n) for(int i=s; i<=n; i++)
#define in_range_back(i,s,n) for(int i=n-1; i >= s; i--)
#define take_array(v,n) in_range(i,0,n) cin>>v[i]
#define print_array(v) for(auto c:v){cout<<c<<" ";}cout<<ln
#define erase_duplicates(x) x.erase(unique(all(x)),x.end());
#define cin2(a, b) cin >> a >> b;
#define cin3(a, b, c) cin >> a >> b >> c;
#define all(x) x.begin(),x.end()
#define all_0(x) memset(x,0,sizeof(x))
#define isEven(x) (x%2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"
#define ln '\n'
#define PQ priority_queue
#define Hashmap unordered_map
#define pb push_back
#define e4 int main()
#define checkmate return 0;
 
using namespace std;
e4
{
  /* _Coder   : anmamun0
     _Created : 03 April 2024 ||  21:47:16
     _File    : Disjoint_Non_Decreasing_Array.cpp

    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vec v(n);
        take_array(v, n - 1);
        vector<int> allready(all(v));
        sort(all(allready));
        int flag = true;
        int b = 0;
        in_range(i,0,n-1)
        {
            if(v[i] != allready[i])
            {
                flag = i;
                break;
            }
        }
        if(flag)yes;
        else
        {
            vector<int> k,y;
            for (int i = 0; i < n-2; i++)
            {
                if(v[i] < v[i+1] and v[i+1] > v[i+2]) k.push_back(i);
                else if(v[i]> v[i+1] and v[i+1] < v[i+2])y.push_back(i);
            }
            bool a = false;

            for (int i = 0; i<k.size(); i++)
            {
                vector<int> z(all(v));
                z[k[i + 1]] = z[k[i + 2]];
                int chack = true;
                int b = 0;
                in_range(i,0,n-1)
                {
                    if(v[i] != allready[i])
                    {
                        chack = i;
                        break;
                    }
                }
                if(chack)
                {
                    a = true;
                    break;
                }
            }

            for (int i = 0; i<y.size(); i++)
            {
                vector<int> z(all(v));
                z[y[i]] = z[y[i + 2]];
                int chack = true;
                int b = 0;
                in_range(i,0,n-1)
                {
                    if(v[i] != allready[i])
                    {
                        chack = i;
                        break;
                    }
                }
                if(chack)
                {
                    a = true;
                    break;
                }
            }
            (a) ? yes : no;
        }
    }

    checkmate;
}