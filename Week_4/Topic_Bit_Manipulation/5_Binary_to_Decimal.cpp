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

int binary_to_dec(string s)
{
    int decimal = 0;
    int indx = 0;
    for (int i = s.length()-1; i >= 0; i--)
    {
        if(s[i]=='1')decimal += pow(2,indx);
        indx++;
    }
    return decimal;
}
void dec_to_binary(int t)
{
    int dec = 19;
    string s= "";

    while(dec !=0)
    {
        int ex = dec % 2;
        s += to_string(ex);
        dec = ceil(dec /2);
    }
    reverse(all(s));

    cout << s << endl;
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 06 April 2024 ||  13:01:35
     _File    : binary_to_dec.cpp

    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "01101";
    cout << binary_to_dec(s);
    enter;
    dec_to_binary(1);

    checkmate;
}