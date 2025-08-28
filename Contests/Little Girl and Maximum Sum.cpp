#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int n, q;
    cin >> n >> q;
    vector<int> nums(n);
    for (auto &i : nums) cin >> i;

    vector<int> diff(n, 0);
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        diff[l] += 1;
        if (r + 1 < n) diff[r + 1] -= 1;
    }

    for (int i = 1; i < n; i++) diff[i] += diff[i - 1];

    sort(diff.begin(), diff.end());
    sort(nums.begin(), nums.end());

    ll ans = 0;
    for (int i = 0; i < n; i++) ans += 1LL * nums[i] * diff[i];
    cout << ans << "\n";
}