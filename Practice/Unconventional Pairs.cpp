#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minPossibleMaxDiff(vector<int>& nums, const int& n){
    sort(nums.begin(), nums.end());
    int ans=INT_MIN;
    for(int i = 0; i<n; i+=2) ans=max(ans, abs(nums[i]-nums[i+1]));

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
        cout<<minPossibleMaxDiff(nums, n)<<endl;
    }
    return 0;
}
