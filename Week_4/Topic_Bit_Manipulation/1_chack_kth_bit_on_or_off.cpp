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
#define gcC int main()
#define checkmate return 0;
 
using namespace std;
// using namespace __gnu_pbds;
int chack_kth_bit_on_or_off(int x, int k)
{
    return (x >> k) & 1;
}
void print_on_and_off_bits(int x)
{
    for (int k = 0; k <= 31; k++)
    {
        if(chack_kth_bit_on_or_off(x,k))
        {
            cout << 1 << " ";
        }
        else cout << 0 << " ";
    }
    enter;
}
int turn_on_kth_bit(int x, int k)
{
    return x | (1 << k);
}
int turn_off_kth_bit(int x, int k)
{
    return x & ~(1 << k);
}
int toggle_kth_bit(int x, int k)
{
    return x ^ (1 << k);
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 06 April 2024 ||  14:27:05
     _File    : chack_kth_bit_on_or_off.cpp

    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // cout << chack_kth_bit_on_or_off(44, 3) << ln;
    // cout << chack_kth_bit_on_or_off(44, 4) << ln;
    // print_on_and_off_bits(44);
    
    // cout << turn_on_kth_bit(44, 4) << ln;
    // cout << turn_off_kth_bit(44, 3)<<ln;

    cout << toggle_kth_bit(44, 3) << ln;
    


    checkmate;
}