#include <iostream>
using namespace std;
 
typedef long long ll;
 
bool canBuild(ll n, ll k, ll s) {
    if (s > k - 1) return false;
    ll first = k - 1;
    ll last = k - s;
    ll totalPipes = s * (first + last) / 2;
    return totalPipes >= n - 1;
}
 
int main() {
    ll n, k;
    cin >> n >> k;
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    ll low = 1, high = min(n - 1, k - 1), ans = -1;
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (canBuild(n, k, mid)) {
            ans = mid;
            high = mid - 1;
        } else
            low = mid + 1;
    }
    cout << ans << endl;
    return 0;
}