#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll minCost(ll n) {
    ll ans = 0;
    ll now = 1;   // start from 3^0 = 1
    int x = 0;

    // find largest power of 3 <= n
    while (now * 3 <= n) {
        now *= 3;
        x++;
    }

    while (n > 0) {
        ll y = n / now; // how many times we can take this deal
        ans += y * (now * 3 + x * (now / 3)); // cost formula
        n %= now;  // reduce n
        now /= 3;  // go to next smaller deal
        x--;
    }

    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << minCost(n) << "\n";
    }
    return 0;
}