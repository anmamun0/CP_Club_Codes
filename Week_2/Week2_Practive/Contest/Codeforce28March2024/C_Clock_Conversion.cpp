#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<ll>
#define loop(i, s, n) for (int i = s; i < n; i++)
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define isEven(x) (x % 2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"
#define ln '\n'

using namespace std;
string datetime(int hour, int minute)
{
    string day = (hour >= 12) ? "PM" : "AM";
    hour %= 12;
    if (hour == 0) hour = 12;
    string s_hour = to_string(hour);
    string s_min = (minute < 10 ? "0" : "");

    if(s_hour.size()==1) s_hour = '0' + s_hour;

    return s_hour + ":" + s_min + to_string(minute) + " " + day;
}

int main()
{
    // _Author  : anmamun0
    // _Created : 28 March 2024 ||  21:30:31
    // _File    : C_Clock_Conversion.cpp

    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int hour, min;
        char c;
        cin >> hour >> c >> min;
        cout << datetime(hour, min);
        enter;
    }

    return 0;
}