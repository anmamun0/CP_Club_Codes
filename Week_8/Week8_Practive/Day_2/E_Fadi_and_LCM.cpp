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
ll gcd(ll a ,ll b)
{
    return __gcd(a, b);
}
bool lcm(ll a , ll b,ll n)
{
    ll lc = (a / (gcd(a, b)) * b);
    return lc == n;
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 30 May 2024 ||  16:09:17
     _File    : E_Fadi_and_LCM.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;       cin >> n; 
    vl val;
    for(int i = 2; i<=(n/2)+1; i++)  if(n%i==0)val.pb(i);   

    vl ans;
    for(auto c:val)
    {
        int a = c;
        for (int i = 1; i < 32; i++)
        {
            if(n==a)ans.pb(c);
            if(a>n)break;
            a <<=1; 
        } 
    }
    bool ck = false;
    if(ans.size()>2)
    {

    
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = ans.size() - 1; j >= 0; j--)
            {
                if(i!= j and lcm(ans[i],ans[j],n))
                {
                    ck = true;
                    cout << ans[i] << " " << ans[j] << endl;
                    break;
                }
            }
            if(ck)break;
        }
    }
    else
    {   
        if(ans.size()==2 and lcm(ans[0],ans[1],n))cout<<ans[0]<<" "<<ans[1]<<endl;
        else if (!ck) cout << 1 << " " << n << endl;
    }
        checkmate;
}