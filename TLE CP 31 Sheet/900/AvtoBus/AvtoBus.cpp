#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void minMaxBuses(ll n) {
    if (n % 2 != 0 || n < 4) {
        cout << -1 << '\n';
    } else {
        cout << n / 6 + (n % 6 > 0) << ' ' << n / 4 << '\n';
    }
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        minMaxBuses(n);
    }
    return 0;
}
