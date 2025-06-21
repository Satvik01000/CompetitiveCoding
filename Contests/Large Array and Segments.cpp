#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr)

ll numberOfSegments(vector<ll>& nums, int n, int k, ll x) {
    ll sum = accumulate(nums.begin(), nums.end(), 0LL);

    ll res = 0;
    for (int i = n - 1; i >= 0; --i) {
        x -= nums[i];
        if (x <= 0) {
            res += k;
            continue;
        }

        ll fullLengths = (x + sum - 1) / sum; // Ceiling division
        if (fullLengths + 1 <= k)
            res += (k - fullLengths);
    }

    return res;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll n, k, x;
        cin >> n >> k >> x;
        vector<ll> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];
        cout << numberOfSegments(nums, n, k, x) << '\n';
    }
    return 0;
}
