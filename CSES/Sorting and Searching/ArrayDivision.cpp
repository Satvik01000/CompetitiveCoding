#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

bool isValid(vector<int>& nums, ll mid, int k, int n){
    ll partitionCount = 1, currSum = 0;
    for(auto& i : nums) {
        if(i > mid) return false;
        if(currSum + i > mid) {
            currSum = i;
            partitionCount++;
        } else
            currSum+=i;
        if(partitionCount > k) return false;
    }
    return partitionCount <= k;
}

ll minPossibleMaxSubarraySum(vector<int>& nums, int k, int n) {
    ll low = *max_element(nums.begin(), nums.end());
    ll high = accumulate(nums.begin(), nums.end(), 0LL);

    ll ans = 0;
    while(low <= high){
        ll mid = low + (high-low)/2;

        if(isValid(nums, mid, k, n)) {
            ans = mid;
            high = mid-1;
        }else
            low = mid+1;
    }
    return ans;
}

int main() {
    fast;
    int n, k;
    cin>>n>>k;
    vector<int> nums(n);
    for(auto& i : nums) cin>>i;

    cout<<minPossibleMaxSubarraySum(nums, k, n)<<endl;
    return 0;
}