#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<ll> 
#define in_range(i,s,n) for(int i=s; i<n; i++)
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
void S_chack(string a, string b)
{
    if(a.size() > b.size())cout<<"<"<<ln;
    else if(a.size() < b.size())cout<<">"<<ln;
    else cout<<"="<<ln;

}
void L_chack(string a,string b)
{
    if(a.size() > b.size()) cout << ">" << ln;
    else if(a.size() < b.size()) cout << "<" << ln;
    else cout << "=" << ln;
}
void M_chack(string a, string b)
{
    if(a.size() > b.size()) cout << ">" << ln;
    else if(a.size() < b.size()) cout << "<" << ln;
    else cout << "=" << ln;
}
e4
{
    // _Coder   : anmamun0
    // _Created : 03 April 2024 ||  16:44:20
    // _File    : M_Compare_T_Shirt_Sizes.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        string a, b; cin2(a,b);

        Hashmap<string, int> hp = {{"S", 1}, {"M", 2},{"L",3} ,{"XL",4},{"XXL",5},{"XXXL",6}};

        char x = a[a.size() - 1];
        char y = b[b.size() - 1];

        if(x=='S' and  y == 'S') S_chack(a,b);
        else if(x=='L' and  y  == 'L') L_chack(a,b);
        else if(x=='M' and  y  == 'M') M_chack(a,b);
        else if(x=='S' and y =='M') cout<<"<"<<ln;
        else if(x=='M' and y == 'S') cout<<">"<<ln;
        else if(x=='L' and y =='M') cout<<">"<<ln;
        else if(x=='M' and y == 'L') cout<<"<"<<ln;
        else if(x=='S' and y =='L') cout<<"<"<<ln;
        else if(x=='L' and y == 'S') cout<<">"<<ln;
        else cout<<"="<<ln;
    }

    checkmate;
}