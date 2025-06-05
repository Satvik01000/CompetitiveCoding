#include <bits/stdc++.h>
using namespace std;

bool isValid(int k, const vector<int>& nums, int n, int m) {
    int last = 0;
    for (int i = 0; i < n; ++i) {
        if ((nums[i] + k) % m < nums[i]) {
            // Wrap-around: allowed values are [0, (nums[i] + k) % m] U [nums[i], m-1]
            if (last <= (nums[i] + k) % m || last >= nums[i])
                continue;
            else
                return false;
        } else {
            // No wrap-around: allowed values are [nums[i], nums[i] + k]
            if (last <= nums[i] + k)
                last = max(last, nums[i]);
            else
                return false;
        }
    }
    return true;
}

int minOperations(vector<int>& nums, int n, int m) {
    int low = 0, high = m, ans = m;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (isValid(mid, nums, n, m)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for (int& i : nums) cin >> i;

    cout << minOperations(nums, n, m) << '\n';
    return 0;
}
