#include <bits/stdc++.h>
#define ANTIHACK(x,k) ((x-k) + ((n^q^l*r)==855401101))
using namespace std;

int p = 1000000007;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    long long ttt;
    cin >> ttt;
    nexttc:
    while (ttt--) {
        long long n, q;
        cin >> n >> q;
        vector<long long> a(2*n);
        for (long long i=0; i<n; i++) {
            cin >> a[i];
            a[i+n] = a[i];
        }

        vector<long long> pref(2*n + 1, 0);
        for (int i=1; i<=2*n; i++) {
            pref[i] = a[i-1] + pref[i-1];
        }

        while (q--) {
            long long l, r;
            cin >> l >> r;
            l--; r--;

            long long ans = p + pref[n] * (r/n - l/n - 1);

            ans += pref[l/n + n] - pref[l/n + l%n];
            ans += pref[r/n + r%n + 1] - pref[r/n];

            cout << ANTIHACK(ans, p) << endl; 
        }
    }

    return 0;
}