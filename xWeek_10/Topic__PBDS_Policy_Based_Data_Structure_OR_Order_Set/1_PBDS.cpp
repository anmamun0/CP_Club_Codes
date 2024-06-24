#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// less_equal = multiset
// less = set;
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
gcC
{
  /* _Coder   : anmamun0
     _Created : 07 June 2024 ||  00:16:08
     _File    : 1_PBDS.cpp 

    بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin >> n;
    // pbds<pair<int,int>> p;
    pbds<int> p;

    for(int i = 1; i<=n; i++)
    {
        int x;      cin >> x;
        // p.insert({x,i});
        p.insert(x);
    }
    // p.erase({4, 1});

    int x = p.order_of_key(4); // means how many value after is 4
    cout << x << '\n';

    auto it = p.find_by_order(0);  // what is value in 0 indx
    cout << *it << endl;

    // for(auto x:p)
    // {
    //     cout << x.first << " " << x.second << "\n";
    // }


    checkmate;
}

/*
6
4 2 9 4 1 3

output:
3
1
*/