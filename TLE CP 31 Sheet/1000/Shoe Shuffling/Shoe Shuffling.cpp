#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void helper(vector<int>& nums, int n){
    vector<int> ans(n+1); // 1-based
    int i = 0;
    while(i < n){
        int j = i;
        // group of equal sizes
        while(j < n && nums[j] == nums[i]) j++;
        int len = j - i;
        if(len == 1){
            cout << -1 << "\n";
            return;
        }
        // rotate group left by 1
        for(int k = 0; k < len; k++)
            ans[i + k + 1] = i + ((k+1) % len) + 1;
        i = j;
    }
    for(int k = 1; k <= n; k++) cout << ans[k] << " ";
    cout << "\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin >> nums[i];
        helper(nums, n);
    }
    return 0;
}
