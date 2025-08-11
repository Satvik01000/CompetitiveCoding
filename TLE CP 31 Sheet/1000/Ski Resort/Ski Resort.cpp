#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll maximizeVacation(vector<ll>& nums, int n, int k, ll q){
    ll ans = 0, count=0;
    for (int i = 0; i < n; ++i) {
        if (nums[i] <= q) {
            count++;
        } else {
            if (count >= k) {
                ll len = count - k + 1;
                ans += (len * (len + 1)) / 2;
            }
            count = 0;
        }
    }

    if (count >= k) {
        ll len = count - k + 1;
        ans += (len * (len + 1)) / 2;
    }
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        ll q;
        cin >> n >> k >> q;
        vector<ll> nums(n);
        for (auto &x : nums) cin >> x;
        cout<<maximizeVacation(nums, n, k, q)<<endl;
    }
    return 0;
}
