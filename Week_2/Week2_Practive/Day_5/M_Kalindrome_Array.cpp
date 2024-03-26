#include <bits/stdc++.h>
typedef long long ll;
#define vec vector<int> 
#define loop(i,s,n) for (int i = s; i <n; i++)
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(),greater<>())
#define isEven(x) (x%2 == 0)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define enter cout << "\n"
using namespace std;

int main()
{
    // _Author  : anmamun0
    // _Created : 25 March 2024 ||  23:43:47
    // _File    : M_Kalindrome_Array.cpp
    
    //  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vec v(n);
        loop(i, 0, n) cin >> v[i];
        
        int i = 0, j = n - 1;
        vector<int> crack;
        bool flag = true;
        while (i < j)
        {
            if (v[i] != v[j])
            {
                crack.insert(crack.end(), {v[i], v[j]}),flag = false;
                break;
            }
            i++, j--;
        }

        // up colleced 2 value that are not same, and below remove 2 value and cack after remvoing value is it bond palindreom
        if ((n<=2) or flag) yes;
        else
        {
            vector<bool> chack(2,true);
            loop(k,0,2)
            {
                vec cpy(v.begin(), v.end());
                cpy.erase(remove(cpy.begin(), cpy.end(), crack[k]), cpy.end());
                int i = 0, j = cpy.size() - 1;
                while(i<j)
                {
                    if(cpy[i] != cpy[j])
                    {
                        chack[k] = false;
                        break;
                    }
                    i++, j--;
                }
            }
            (chack[0] or chack[1]) ? yes : no; 
        }
    }
    return 0;
}