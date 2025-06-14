#include <bits/stdc++.h>
using namespace std;

bool check(const vector<int>& nums, int val, int n, int m) {
    vector<int> b = nums;

    for (int i = 1; i <= n; i++) {
        int need = (b[i - 1] - b[i] + m) % m;
        if (need <= val)
            b[i] = b[i - 1];
        else if (b[i] < b[i - 1])
            return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> nums(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> nums[i];

    int low = 0, high = m;
    while (low < high) {
        int mid = low + (high - low)/2;
        if (check(nums, mid, n, m))
            high = mid;
        else
            low = mid + 1;
    }

    cout << high << '\n';
    return 0;
}