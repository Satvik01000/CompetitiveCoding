#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

bool isValid(ll cap, vector<int>& nums, int t) {
    ll productsMade = 0;

    for (auto& time : nums) {
        productsMade += (cap / time);

        if (productsMade >= t) return true;
    }

    return false;
}

ll shortestTime(vector<int>& nums, int t) {
    ll low = 1;
    ll high = (ll)*min_element(nums.begin(), nums.end()) * t;

    while (low <= high) {
        ll mid = (low + high) / 2;

        if (isValid(mid, nums, t)) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main() {
    fast;
    int n, t;
    cin >> n >> t;

    vector<int> nums(n);
    for (auto& i : nums) cin >> i;

    cout << shortestTime(nums, t) << endl;
}