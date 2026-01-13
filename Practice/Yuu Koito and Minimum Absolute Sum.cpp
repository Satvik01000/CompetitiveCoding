#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void helper(vector<int>& nums, int n){
    if(nums[n-1] == -1 && nums[0] == -1) {
        nums[0] = 0;
        nums[n-1] = 0;
    } else if (nums[n-1] != nums[0]) {
        if(nums[n-1] == -1) nums[n-1] = nums[0];
        else if (nums[0] == -1) nums[0] = nums[n-1];
    }
    for(auto& i : nums) if(i==-1) i=0;

    cout<<abs(nums[n-1]-nums[0])<<endl;
    for(auto& i : nums) cout<<i<<" ";
    cout<<endl;
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
        helper(nums, n);
    }
    return 0;
}
