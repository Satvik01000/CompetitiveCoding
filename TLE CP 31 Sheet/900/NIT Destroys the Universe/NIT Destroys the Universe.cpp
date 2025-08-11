#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minOperationsRequired(vector<int>& nums, int n) {
    int low = 0, high = n - 1;

    while (low < n && nums[low] == 0) low++;
    if (low == n) return 0;

    while (high >= 0 && nums[high] == 0) high--;

    for (int i = low; i <= high; i++)
        if (nums[i] == 0) return 2;

        return 1;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto& i : nums) cin >> i;
        cout << minOperationsRequired(nums, n) << endl;
    }
    return 0;
}
