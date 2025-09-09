#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll subarraySum(vector<ll>& nums, ll k) {
    ll prefixSum = 0, count = 0;
    map<ll, ll> mpp;
    mpp[0] = 1;

    for (auto& i : nums) {
        prefixSum += i;
        count += mpp[prefixSum - k];
        mpp[prefixSum]++;
    }
    return count;
}

int main() {
    fast;
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> nums(n);
    for (auto& i : nums) cin >> i;
    cout << subarraySum(nums, x) << "\n";
    return 0;
}