#include <bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for (int i = s; i <n; i++)
#define sort(v) sort(v.begin(), v.end())
using namespace std;

class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &a , int n)
    {
        int l =0 , r = 0;
        long long sum = 0, ans = 0;
        while(r<n)
        {
            sum += a[r];
            if((r-l+1) == k)
            {
                ans = max(ans,sum);
                sum -= a[l];
                l++;
                r++;
            }
            else 
            {
                r++;
            }
        }
        return ans;
    }
};


int main()
{
    // User : AN.Mamun
    // Data : 2024 March 7
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    
 
    return 0;
}

//https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1


// Sliding Window
//  1. Fixed Size
//  2. variable Size