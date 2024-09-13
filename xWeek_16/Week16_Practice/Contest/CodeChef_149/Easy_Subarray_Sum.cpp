#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        priority_queue<int>pq;
        ll ans=0;
        int cnt=1;
        for(int i=1;i<n;++i){
            if(s[i]==s[i-1])cnt++;
            else{
                pq.push(cnt);
                cnt=1;
            }
        }
        pq.push(cnt);
        while(pq.size()>1){
            int num=pq.top();
            pq.pop();
            num--;
            if(num>0)pq.push(num);
            ans+=pq.size()-1;
        }
        cout<<ans<<endl;
    }
}