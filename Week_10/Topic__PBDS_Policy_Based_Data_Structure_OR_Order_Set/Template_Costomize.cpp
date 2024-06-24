#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef long long ll;
#define vl vector<ll> 
#define vi vector<int>
#define in_range(i, s, n, ch)  for (int i = s; ((ch=='+')?i<=n:i>=0) ; ((ch=='+')?++i:--i)
#define erase_duplicates(x) x.erase(unique(all(x)),x.end()); 
#define all(x) x.begin(),x.end()
#define all_0(x) memset(x,0,sizeof(x))
#define isEven(x) ((x&1)== 0)
#define yes print("YES\n")
#define no print("NO\n")
#define enter print("\n")
#define ln '\n' 
#define Hashmap unordered_map
#define pb push_back
#define gcC int main()
#define checkmate return 0;

template <typename... DataIn>
void input(DataIn&... val){(cin >> ... >> val);}
template <typename... DataOut>
void print(const DataOut&... val){((cout << val), ...); }

//((cout << val << " "), ...) << "\n";

// class Data
// {
// public:
//     template <typename... Deep>
//     void input(Deep&... args)
//     {
//         (cin >> ... >> args);
//     }
//     template <typename... Deep>
//     void print(const Deep&... args)
//     {
//         ((cout << args << " "), ...) << "\n";
//     }
// }; 

int main()
{
   

    int a, b,c;
    // Data code;
    // code.input(a, b, c);
    // code.print(a, b, c);

    // input(a, b, c);
    // print(a, b, c);
    // int n = 3;
    // vector<int> v(n);
    // for(auto &c:v) input(c);

    // for(auto &c:v)print(c);
    input(a, b);
    print(a,ln, b,ln); 

    return 0;
}


// class Data
// {
//     public:
//     void input(auto &a, auto &b)
//     {
//         cin >> a >> b;
//     }
//     void input(auto &a, auto &b,auto &c)
//     {
//         cin >> a >> b >> c;
//     }
//     void input(auto &a, auto &b, auto &c,auto &d)
//     {
//         cin >> a >> b >> c;
//     } 
//     void print(auto &a, auto &b)
//     {
//         cout << a << " " << b << "\n";
//     }
//     void print(auto &a, auto &b,auto &c)
//     {
//         cout << a << " " << b << " " << c << "\n";
//     }
//     void print(auto &a, auto &b, auto &c,auto &d)
//     {
//         cout << a << " " << b << " " << c << " " << d << "\n";
//     }
// };