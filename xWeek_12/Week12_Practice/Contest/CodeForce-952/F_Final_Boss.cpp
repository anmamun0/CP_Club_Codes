#include <bits/stdc++.h>
using namespace std;
typedef long long ll;   

ll H;

bool check(vector<ll> &a, vector<ll> &b, ll val) {
    ll dmg = 0;

    for(int i=0; i<a.size(); i++) {
        ll curDmg = ((val/b[i])+1)*a[i];
        dmg += curDmg;
        if(dmg >= H) return true;
    }

    return dmg >= H;
}

void sol() {
    ll h, n;
    cin >> h >> n;
    H = h;
    vector<ll> a(n), c(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        cin >> c[i];
    }

    ll lo = 0;
    ll hi = 1e12;

    while(hi - lo > 1) {
        ll mid = (lo+hi)/2;

        if(check(a, c, mid)) {
            hi = mid;
        }else {
            lo = mid;
        }
    }

    if(check(a, c, lo)) {
        cout << lo+1 << endl;
        return;
    }
    cout << hi+1 << endl;
}
    
int main() {
    int t = 1;
    cin >> t;
    
    while(t--) sol();

    return 0;
}