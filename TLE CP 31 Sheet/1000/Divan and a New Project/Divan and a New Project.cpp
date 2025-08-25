#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void helper(vector<pair<ll,int>>& nums, int n) {
    // Sorted in decending order
    sort(nums.begin(), nums.end(), [](auto &x, auto &y){ return x.first > y.first; });

    vector<ll> ans(n + 1, 0);
    ans[0] = 0;

    ll minutes = 0, coordinate=1;

    for (int i = 0; i < n; i++) {
        ll freq = nums[i].first;
        int idx = nums[i].second;

        ans[idx] = coordinate;
        minutes += 2LL * llabs(coordinate) * freq;

        if (coordinate < 0) coordinate = llabs(coordinate) + 1;
        else coordinate = -coordinate;
    }

    cout << minutes << '\n';
    for (int i = 0; i <= n; i++) cout << ans[i] << (i==n?'\n':' ');
}

int main() {
    fast;
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<pair<ll,int>> nums(n);
        for (int i = 0; i < n; i++) {
            ll freq; 
            cin >> freq;
            nums[i] = {freq, i + 1};
        }
        helper(nums, n);
    }
    return 0;
}
