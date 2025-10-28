#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll maxPerimeter(vector<int>& nums, int n) {
    unordered_map<int, int> freq;
    for (auto &x : nums) freq[x]++;

    if ((int)freq.size() == n) return 0;

    ll sumPairs = 0;
    vector<int> leftovers;

    for (auto &[len, cnt] : freq) {
        int pairs = (cnt / 2);
        sumPairs += 2LL * len * pairs;
        if (cnt & 1) leftovers.push_back(len);
    }

    ll ans = sumPairs;

    sort(leftovers.begin(), leftovers.end());

    // Case 2: line of symmetry intersects exactly one stick (the "odd" stick)
    // As long as odd stick < total length of paired sides, we can use it.
    for (auto &odd : leftovers) {
        if (odd < sumPairs / 2) // since sumPairs = 2 * (sum of one side)
            ans = max(ans, sumPairs + odd);
    }

    // Case 3: line of symmetry intersects exactly two sticks
    // Check adjacent pairs (v[i], v[i+1])
    for (int i = 0; i + 1 < (int)leftovers.size(); i++) {
        ll longOdd = leftovers[i + 1];
        ll shortOdd = leftovers[i];
        if (longOdd - shortOdd < sumPairs / 2)
            ans = max(ans, sumPairs + longOdd + shortOdd);
    }
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
        for (auto &x : nums) cin >> x;
        cout << maxPerimeter(nums, n) << "\n";
    }
    return 0;
}
