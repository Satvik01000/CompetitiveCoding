#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void helper(vector<int>& nums, int n){
    vector<int> prefixMin(n), suffixMax(n);
    prefixMin[0] = nums[0];
    suffixMax[n-1] = nums[n-1];

    for (int i = 1; i < n; i++)
        prefixMin[i] = min(prefixMin[i-1], nums[i]);

    for (int i = n-2; i >= 0; i--)
        suffixMax[i] = max(suffixMax[i+1], nums[i]);

    for (int i = 0; i < n; i++) {
        if (prefixMin[i] == nums[i] || suffixMax[i] == nums[i])
            cout << '1';
        else
            cout << '0';
    }
    cout << '\n';
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
        helper(nums, n);
    }
    return 0;
}
