#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool canMake(ll x, const vector<int>& a, const vector<int>& b, int n, ll k) {
    ll totalPowder = 0;
    for (int i = 0; i < n; ++i) {
        ll required = x * 1LL * a[i];
        if (required > b[i]) {
            totalPowder += required - b[i];
        }
    }
    return totalPowder <= k;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for (int& i : a) cin >> i;
    for (int& i : b) cin >> i;

    ll low = 0, high = 2e9, ans = 0;
    while (low <= high) {
        ll mid = (low + high) / 2;
        if (canMake(mid, a, b, n, k)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
