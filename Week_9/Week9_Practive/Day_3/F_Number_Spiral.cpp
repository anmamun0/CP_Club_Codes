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
int number(int i, int j)
{
    int mx = max(i, j);
    int pass = (mx - 1) * (mx - 1);

    if(mx%2==0)
    {
        if(i==mx)return pass+j;
        else pass + 2 * mx - i;
    }
    return 0;
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 05 June 2024 ||  12:50:15
     _File    : F_Number_Spiral.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;  cin  >> T;
    while(T--)
    {

        int i, j; cin2(i, j);
        cout << number(i, j) << "\n";
    }

    checkmate;
}

/*
 vector<vector<ll>> v(1000+10,vector<ll>(1000+10));

    ll x = 1000, y = 1000;
    ll i = 0, j = 0;
    ll val = 1;
    v[0][0] = val,val++; 

    while(i<x and j<y)
    {
        if(i==0)
        {
            
            j++;
            while(i<j)
            {
                v[i][j] = val;
                val++; 
                i++;
            }
            while(j>0)
            {
                v[i][j] = val;
                val++; 
                j--; 
            }
            v[i][j] = val; val++; 

        }
        if(j==0)
        { 

            i++;
            while(j<i)
            {
                v[i][j] = val;
                val++; 
                j++; 
            }
            while(i>0)
            {
                v[i][j] = val;
                val++; 
                i--; 
            }
            v[i][j] = val; val++; 

        } 
    }
*/