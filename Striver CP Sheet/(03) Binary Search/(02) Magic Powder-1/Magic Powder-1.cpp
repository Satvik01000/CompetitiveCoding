#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool canMake(ll x, const vector<int>& need, const vector<int>& have, int n, ll k) {
    ll totalPowder = 0;
    for (int i = 0; i < n; ++i) {
        ll required = x * 1LL * need[i];
        if (required > have[i])
            totalPowder += required - have[i];
    }
    return totalPowder <= k;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> need(n), have(n);
    for (int& i : need) 
        cin >> i;
    
    for (int& i : have) 
        cin >> i;

    ll low = 0, high = 2e9, ans = 0;
    while (low <= high) {
        ll mid = (low + high) / 2;
        if (canMake(mid, need, have, n, k)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
