#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;

    int n, k;
    ll m;
    cin >> n >> k >> m;

    vector<ll> nums(n);
    for(auto &x : nums) cin >> x;

    vector<ll> pref(n+1, 0);
    for(int i = 0; i < n; i++) pref[i+1] = pref[i] + nums[i];

    ll ans = 0;
    int high = 0;

    for(int low = 0; low < n; low++) {
        if(high < low) high = low;

        if(high < low + k - 1) high = low + k - 1;

        while(high < n && (pref[high+1] - pref[low]) < m) high++;

        if(high >= n) break;

        ans += n - high;
    }

    cout << ans << endl;
}
