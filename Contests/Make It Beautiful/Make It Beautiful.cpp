#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int maxBeautyPossible(vector<int64_t>& a, int n, int64_t k) {
    vector<int> all;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 60; j++) {
            if ((a[i] >> j) & 1)
                ans += 1;
            else
                all.push_back(j);
        }
    }
    sort(all.begin(), all.end());
    for (int x : all) {
        int64_t need = 1LL << x;
        if (k >= need) {
            k -= need;
            ans += 1;
        } else {
            break;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        int64_t k;
        cin >> n >> k;
        vector<int64_t> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << maxBeautyPossible(a, n, k) << '\n';
    }
    return 0;
}