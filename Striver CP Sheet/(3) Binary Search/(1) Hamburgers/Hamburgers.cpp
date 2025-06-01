#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool canMake(ll x, ll nb, ll ns, ll nc, ll pb, ll ps, ll pc, ll needB, ll needS, ll needC, ll r) {
    ll totalB = max(0LL, x * needB - nb);
    ll totalS = max(0LL, x * needS - ns);
    ll totalC = max(0LL, x * needC - nc);

    ll cost = totalB * pb + totalS * ps + totalC * pc;
    return cost <= r;
}

int main() {
    string recipe;
    cin >> recipe;

    ll nb, ns, nc;
    cin >> nb >> ns >> nc;

    ll pb, ps, pc;
    cin >> pb >> ps >> pc;

    ll r;
    cin >> r;

    // Count ingredients needed per hamburger
    ll needB = 0, needS = 0, needC = 0;
    for (char ch : recipe) {
        if (ch == 'B') needB++;
        else if (ch == 'S') needS++;
        else if (ch == 'C') needC++;
    }

    ll low = 0, high = 1e13, ans = 0;
    while (low <= high) {
        ll mid = (low + high) / 2;
        if (canMake(mid, nb, ns, nc, pb, ps, pc, needB, needS, needC, r)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}
