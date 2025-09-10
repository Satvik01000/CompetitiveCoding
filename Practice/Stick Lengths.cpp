#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll minTotalCost(vector<int>& nums, const int& n){
    sort(nums.begin(), nums.end());
    int medianIndex = n/2;
    int median;
    if(n&1) median = nums[medianIndex];
    else median = (nums[medianIndex-1]+nums[medianIndex])>>1;

    ll ans = 0;
    for(auto& i : nums) ans+=abs(i-median);

    return ans;
}

int main() {
    fast;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto& i : nums) cin>>i;
    cout<<minTotalCost(nums, n)<<endl;
    return 0;
}
