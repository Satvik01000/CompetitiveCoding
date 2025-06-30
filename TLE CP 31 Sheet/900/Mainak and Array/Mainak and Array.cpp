#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int maxPossibleDifference(vector<int>& nums, int n){
    int ans = INT_MIN;
    for(int i=0; i<n; i++) ans=max(ans, nums[i]-nums[(i+1)%n]);
    for(int i=1; i<n; i++) ans = max(ans, nums[i]-nums[0]);
    for(int i=0; i<n-1; i++) ans = max(ans, nums[n-1]-nums[i]);
    
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
        cout<<maxPossibleDifference(nums, n)<<endl;
    }
    return 0;
}
