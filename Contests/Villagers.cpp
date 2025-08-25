#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll minEmeralds(vector<int>& nums, const int& n){
    sort(nums.begin(), nums.end());
    ll ans = 0;
    for (int i = n - 1; i >= 0; i -= 2) ans += nums[i];
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        cout << minEmeralds(nums, n) << "\n";
    }
    return 0;
}
