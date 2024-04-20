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
void Binary_Search(vector<ll>&v, ll key)
{
    ll l = 0, r = v.size() - 1, mid;
    bool flag = false;

    while(l<=r)
    {
        mid = l + (r - l) / 2;
        if(v[mid] == key)
        {
            flag = true;
            break;
        }
        else if(key < v[mid]) r = mid -1;
        else l = mid +1;
    }
    (flag) ? yes : no;
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 20 April 2024 ||  14:14:29
     _File    : A_Binary_Search.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;       cin2(n,k);
    vl v(n);        take_array(v,n-1);
    vl keys(k);     take_array(keys,k-1);

    in_range(i,0,n-1) Binary_Search(v, keys[i]);

    checkmate;
}