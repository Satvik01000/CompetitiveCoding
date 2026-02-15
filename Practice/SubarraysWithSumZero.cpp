#include <bits/stdc++.h>
using namespace std;

int numberOfBuildings(vector<int>& a, int n) {
    vector<int> left(n, 0), right(n, 0);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.top()] < a[i]) {
            st.pop();
            left[i]++;
        }
        if (!st.empty()) left[i]++;
        st.push(i);
    }

    while (!st.empty()) st.pop();

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] < a[i]) {
            st.pop();
            right[i]++;
        }
        if (!st.empty()) right[i]++;
        st.push(i);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, left[i] + right[i] + 1);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &x : nums) cin >> x;
    cout << numberOfBuildings(nums, n) << endl;
}
