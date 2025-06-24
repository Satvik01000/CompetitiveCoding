#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int maxPossibleWays(vector<int>& nums, int n){
    sort(nums.begin(), nums.end());
    int sumWindow=nums[n-2]+nums[n-3]+nums[n-4];
    // int low=
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int& i : nums)
            cin>>i;
        cout<<maxPossibleWays(nums, n)<<endl;
    }
    return 0;
}
