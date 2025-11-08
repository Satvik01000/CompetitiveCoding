#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    fast;
    int x, n;
    cin >> x >> n;
    vector<int> nums(n);
    for (auto &i : nums) cin >> i;
    int q;
    cin >> q;
    
    vector<bool> flag(n, false);
    
    while (q--) {
        int p;
        cin >> p;
        p--;
        if (flag[p]) {
            x -= nums[p];
            flag[p] = false;
        } else {
            x += nums[p];
            flag[p] = true;
        }
        cout << x << "\n";
    }
    return 0;
}
