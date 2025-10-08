#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int numberOfFavoriteSubarrays(vector<int>& nums, int m, int n) {
    for (int i = 0; i < m - 1; i++)
        if (nums[i] >= nums[i + 1]) return 1;
    return n - nums[m - 1] + 1;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> nums(m);
        for (auto &i : nums) cin >> i;
        cout << numberOfFavoriteSubarrays(nums, m, n) << "\n";
    }
    return 0;
}