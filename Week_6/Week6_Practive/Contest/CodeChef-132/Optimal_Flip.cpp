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
int max_count_subarrays(vector<int>& arr) {
    int n = arr.size();
    int max_count = 0;

    // Count the number of subarrays with at least one even element before any operation
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            count += (n - i); // Number of subarrays starting from i containing even element
        }
    }
    max_count = max(max_count, count);

    // Try performing the operation on each element and count the number of subarrays with at least one even element
    for (int i = 0; i < n; ++i) {
        vector<int> arr_copy = arr;
        arr_copy[i] += 1;

        count = 0;
        for (int j = 0; j < n; ++j) {
            if (arr_copy[j] % 2 == 0) {
                count += (n - j); // Number of subarrays starting from j containing even element
            }
        }
        max_count = max(max_count, count);
    }

    return max_count+1;
}
gcC
{
  /* _Coder   : anmamun0
     _Created : 01 May 2024 ||  21:53:24
     _File    : Optimal_Flip.cpp 
 
    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >>t;
    while(t--)
    {
        int n;  cin>>n;
        vi v(n);    take_array(v,n-1);

        cout << max_count_subarrays(v) << endl;
    }

    checkmate;
}