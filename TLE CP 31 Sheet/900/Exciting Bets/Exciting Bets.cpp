#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        if (a == b) {
            cout << "0 0\n";
        } else {
            ll d = abs(a - b);
            ll rem = a % d;
            ll minMoves = min(rem, d - rem);
            cout << d << " " << minMoves << "\n";
        }
    }
    return 0;
}
