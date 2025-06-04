#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;
int main() {
    ll n, k;
    cin >> n >> k;
    
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    
    if (n <= k) {
        cout << 1 << endl;
        return 0;
    }
    
    ll low = 2, high = k, ans = -1;
    ll out = k * (k + 1) / 2;
    out -= k;
    
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll temp = out - ((mid * (mid - 1) / 2) - mid);
        
        if (temp >= n) {
            ans = k - (mid - 1);
            low = mid + 1;
        } else
            high = mid - 1;
    }
    cout << ans << endl;
    return 0;
}