#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll numberOfSubarrays(vector<int>& nums, const int& n){
    ll prefixSum = 0, count = 0;
    unordered_map<int, ll> mpp;
    mpp[0] = 1; // important base case

    for(auto& i : nums){
        prefixSum += i;
        int temp = ((prefixSum % n) + n) % n; // normalize remainder
        count += mpp[temp];
        mpp[temp]++;
    }
    return count;
}

int main() {
    fast;
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto& i : nums) cin >> i;
    cout << numberOfSubarrays(nums, n) << "\n";
    return 0;
}
