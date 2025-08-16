#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll maxPossibleTeams(vector<int>& nums, int n, ll d) {
    sort(nums.begin(), nums.end());
    ll count = 0;
    int left = 0, right = n - 1;

    while (left <= right) {
        int teamSize = 1;
        int strongest = nums[right];
        right--;

        while (left <= right && 1LL * strongest * teamSize <= d) {
            teamSize++;
            left++;
        }

        if (1LL * strongest * teamSize > d) count++;
        else break;
    }
    return count;
}

int main() {
    fast;
    int n; 
    ll d;
    cin >> n >> d;
    vector<int> nums(n);
    for (auto& i : nums) cin >> i;

    cout << maxPossibleTeams(nums, n, d) << "\n";
    return 0;
}