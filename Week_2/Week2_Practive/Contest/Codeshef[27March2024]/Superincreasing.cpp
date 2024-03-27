#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define isEven(x) (x % 2 == 0)
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define enter cout << "\n"
#define ln '\n'
//CGPT Solution , Approch 1 -> 
bool isValidSuperincreasing(int n,int k, int x)
{
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (i == k)
        {
            if (x <= sum) return  false;
            sum += x;
        }
        else sum += i;
    }

    return true;
}

using namespace std;
int main()
{
    // _Author  : anmamun0
    // _Created : 27 March 2024 ||  21:03:35
    // _File    : Superincreasing.cpp

    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, x, sum = 1;
        cin >> n >> k >> x;

        loop(i,2,k)
        {
            sum += sum + 1;
            if(sum>=x) break;
        }

        if (k == 1) yes;
        else if (sum < x) yes;
        else no;
    }

    return 0;
}