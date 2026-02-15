#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll minTemp(vector<int>& nums, int n){
    sort(nums.begin(), nums.end());
    ll ans = abs(nums[0]);
    for(int i = 1; i<n; i++)ans+=abs(nums[i]-nums[i-1]);
    return ans+nums[n-1];
}

int main() {
    fast;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto& i : nums) cin>>i;
    cout<<minTemp(nums, n)<<endl;
    return 0;
}
