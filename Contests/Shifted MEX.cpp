#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int mex(const vector<int>& a, int k) {
    unordered_set<int> s;
    for(auto& i : a) s.insert(i-k);

    int m = 0;
    while (s.count(m)) m++;
    return m;
}

int maxPossibleMEX(vector<int>& nums, int n){
    int ans = 0;
    for(int i = 0; i<n; i++)
        ans = max(ans, mex(nums, nums[i]));
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> nums(n);
        for(auto& i : nums) cin>>i;
        cout<<maxPossibleMEX(nums, n)<<endl;
    }
    return 0;
}
